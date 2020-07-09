/*********
Dhiraj 
*********/
#include <ESP8266WiFi.h>                                                    // esp8266 library
#include <FirebaseArduino.h>                                                // firebase library
#define FIREBASE_HOST "***.firebaseio.com"                          // the project name address from firebase id
#define FIREBASE_AUTH "********************"            // the secret key generated from firebase

#define WIFI_SSID "******"                                             // input your home or public wifi name 
#define WIFI_PASSWORD "**********"

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

int WET= 16; // Wet Indicator at Digital PIN D0
int DRY= 2;  // Dry Indicator at Digital PIN D4
int sense_Pin= 0; // Soil Sensor input at Analog PIN A0
int V= 0;


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define DHTPIN 14     // Digital pin connected to the DHT sensor

// Uncomment the type of sensor in use:
#define DHTTYPE    DHT11     // DHT 11
//#define DHTTYPE    DHT22     // DHT 22 (AM2302)
//#define DHTTYPE    DHT21     // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  pinMode(WET, OUTPUT);
   pinMode(DRY, OUTPUT);
   delay(2000);

  dht.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();
  display.setTextColor(WHITE);

  // wifi connected             
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                     //try to connect with wifi
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP());                                            //print local IP address
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);                              // connect to firebase
}

void loop() {
  delay(1000);

  Serial.print("MOISTURE LEVEL : ");
   V= analogRead(sense_Pin);
   V= V/10;
   Serial.println(V);

  //read temperature and humidity
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
  }

  // firebase

  //Serial.print("Humidity: ");  Serial.print(h);
  //String fireHumid = String(h) + String("%");                                         //convert integer humidity to string humidity 
  //Serial.print("%  Temperature: ");  Serial.print(t);  Serial.println("Â°C ");
  //String fireTemp = String(t) + String("Â°C");                                                     //convert integer temperature to string temperature
  //delay(4000);
  
 // Firebase.pushString("Humidity", fireHumid);                                  //setup path and send readings
  //Firebase.pushString("Temp", fireTemp);                                //setup path and send readings
  Firebase.setFloat ("Temp",t);
  Firebase.setFloat ("Humidity",h);
  
  // clear display
  display.clearDisplay();
  
  // display temperature
  display.setTextSize(1);
  display.setCursor(0,0);
  display.print("T=");
  display.setTextSize(1);
  display.setCursor(15,0);
  display.print(t);
  display.print(" ");
  display.setTextSize(1);
  display.cp437(true);
  display.write(167);
  display.setTextSize(1);
  display.print("C");
  
  // display humidity
  display.setTextSize(1);
  display.setCursor(0, 15);
  display.print("H=");
  display.setTextSize(1);
  display.setCursor(15, 15);
  display.print(h);
  display.print(" %"); 

  //moisture
  // display humidity
  display.setTextSize(1);
  display.setCursor(0, 25);
  display.print("M=");
  display.setTextSize(1);
  display.setCursor(15, 25);
  display.print(V);
  
  display.display(); 
}
