# IOT-Projects
 
<p><strong><u>INTRODUCTION TO PROJECT</u></strong></p>
<p><strong><u>&nbsp;</u></strong></p>
<p>The objective of this project is to design an Electronic Device that can display the Real-Time values of Temperature, Humidity, and Soil Moisture using various Sensors such as DHT11, capacitive soil moisture sensor, and Microcontroller-NodeMCU that transmits those values to the mobile application using a Wi-Fi module.</p>
<p>We can also control the values of temperature, soil moisture, etc. by activating the respective devices such as water pumps using mobile applications or by setting the threshold values for temperature, soil-moisture, etc. in the microcontroller program.</p>
<p>This whole project is divided into two parts:-</p>
<ol>
<li>Hardware</li>
<li>Software</li>
</ol>
<p><strong>Components Required:-</strong></p>
<ul>
<li>Microcontroller</li>
<li>The analog soil moisture sensor</li>
<li>Digital sensor DHT11</li>
<li>Display</li>
<li>10k resistor</li>
<li>Bread Board</li>
<li>LED</li>
<li>Female DC power jack socket</li>
<li>Connection wires</li>
<li>Jumper wires</li>
<li>Vero Board</li>
<li>12V Adaptor</li>
</ul>
<p><strong>Schematic:-</strong></p>
<p><strong>&nbsp;</strong></p>
<img src="https://github.com/Dhirajsharmain/IOT-Projects/blob/master/minor.png"></img>
<p><strong>&nbsp;</strong></p>
<p><strong><u>INTRODUCTION TO NodeMCU</u></strong></p>
<p>&nbsp;</p>
<p>ESP8266 NodeMcu is a popular and widely used development board based on the ESP-12E WiFi Module that combines elements of easy programming with Arduino IDE (C\C++) and WiFi capability. Through the build-in programmer and CH340G USB-to-Serial chip, flashing the ESP8266 and serial output on a PC, development, and prototyping projects are done with ease. Just like Arduino boards, the ESP8266 NodeMcu has GPIO pins, voltage regulator, ADC, Micro-USB port (for flashing and serial output) &ndash; all on one board. On top of that, the ESP8266 NodeMcu has full WiFi that takes care of the WiFi communication to a server or client.</p>
<p>The ESP8266 is a System on a Chip (SoC), manufactured by the Chinese company Espressif. It consists of a Tensilica L106 32-bit <strong>microcontroller</strong> unit (MCU) and a <strong>Wi-Fi transceiver</strong>. It has <strong>11 GPIO pins</strong>* (General Purpose Input/Output pins), and&nbsp;<strong>analog input</strong> as well. This means that you can program it like any normal Arduino or another microcontroller. And on top of that, you get Wi-Fi communication, so you can use it to connect to your Wi-Fi network, connect to the Internet, host a web server with real web pages, let your smartphone connect to it, etc &hellip; The possibilities are endless! It&rsquo;s no wonder that this chip has become the most popular IoT device available.</p>
<p>It contains a built-in 32-bit low-power CPU, ROM, and RAM. It is a complete and self-contained Wi-Fi network solution that can carry software applications as a stand-alone device or connected with a microcontroller (MCU). The module has built-in AT Command firmware to be used with any MCU via COM port. The ESP8266 can be flashed and programmed using the Arduino IDE. Due to its large open-source developer community, a large number of libraries for this popular microcontroller is available.</p>
<p><strong>Processor:</strong></p>
<p>The ESP8266EX integrates a Tensilica L106 32-bit RISC processor, which achieves extra-low power consumption and reaches a maximum clock speed of 160 MHz. The Real-Time Operating System (RTOS) and Wi-Fi stack allow 80% of the processing power to be available for user application programming and development.</p>
<p><strong>Memory:</strong></p>
<ul>
<li>32 KB instruction RAM</li>
<li>80 KB user data RAM</li>
<li>16 KB ETS system data RAM</li>
<li>External QSPI flash: up to 16 MB is supported (512 KB to 4 MB typically included)</li>
</ul>
<p>All ESP8266 variants have an ESP8266EX&nbsp;core processor and a Tensilica L106 32-bit microcontroller unit. This is a low cost, high performance, low power consumption, easy to program, wireless SoC(System-On-Chip). It provides capabilities for 2.4 GHz Wi-Fi (802.11 b/g/n, supporting WPA/WPA2), general-purpose input/output (13 GPIO), Inter-Integrated Circuit (I&sup2;C), analog-to-digital conversion (10-bit ADC), Serial Peripheral Interface (SPI), I&sup2;S interfaces with DMA (sharing pins with GPIO), UART (on dedicated pins, plus a transmit-only UART can be enabled on GPIO2), and pulse-width modulation (PWM).</p>
<p>It has a built-in programmer and a voltage regulator, that allows flashing and powering the device via micro-USB. The system operates at 3.3V.</p>
<p>Here is an overview of the ESP8266 NodeMcu&rsquo;s specifications:</p>
<ul>
<li>Tensilica L106 32-bit microcontroller unit at 80 MHz (or overclocked to 160 MHz)</li>
<li>32 kB instruction RAM</li>
<li>80 kB user data RAM</li>
<li>16 kB ETS system data RAM</li>
<li>Flash Memory 4Mb</li>
<li>USB &ndash; micro USB port for power, programming, and debugging</li>
<li>13 GPIO pins</li>
<li>STA / AP modes support</li>
<li>TCP / IP protocol stack, One socket</li>
<li>TCP / UDP Server and Client</li>
<li>Serial port baud rate configuration: 1200/2400/4800/9600/19200/38400/57600/74800/115200 bps</li>
<li>Pin-compatible with Arduino UNO, Mega</li>
<li>32-bit hardware timer</li>
<li>WiFi operation current: continuous transmission operation: &asymp;70mA (200mA MAX), deep sleep mode: &lt;3mA</li>
<li>Serial WiFi transmission rate: 110-460800bps</li>
<li>Temperature: -40℃ ~ + 125 ℃</li>
<li>Humidity: 10%-90% non-condensing</li>
<li>Weight: about 20g (0.7oz)</li>
<li>Pulse-Width Modulation (PWM)</li>
<li>Interrupt capability</li>
<li>3.3V operating voltage, the internal voltage regulator allows 5V on the power input</li>
<li>the maximum current through GPIO pins: 12mA (source), 20mA (drain)</li>
<li>available firmware for Arduino IDE</li>
<li>Websocket libraries available</li>
</ul>
<p><strong>&nbsp;</strong></p>
<p><strong>Small Size</strong></p>
<p>ESP8266EX is integrated with a 32-bit Tensilica processor, standard digital peripheral interfaces, antenna switches, RF balun, power amplifier, low noise receive amplifier, filters and power management modules. All of them are included in one small package, our ESP8266EX.</p>
<p><strong>High Durability</strong></p>
<p>ESP8266EX is capable of functioning consistently in industrial environments, due to its wide operating temperature range. With highly-integrated on-chip features and minimal external discrete component count, the chip offers reliability, compactness, and robustness.</p>
<p><strong>Pins</strong></p>
<p>NodeMCU provides access to the GPIO (General Purpose Input/Output) and a pin mapping table is part of the API documentation</p>
<table width="309">
<tbody>
<tr>
<td width="136">
<p><strong>I/O index </strong></p>
</td>
<td width="167">
<p><strong>ESP8266 pin </strong></p>
</td>
</tr>
<tr>
<td width="136">
<p>0 [*]</p>
</td>
<td width="167">
<p>GPIO16</p>
</td>
</tr>
<tr>
<td width="136">
<p>1</p>
</td>
<td width="167">
<p>GPIO5</p>
</td>
</tr>
<tr>
<td width="136">
<p>2</p>
</td>
<td width="167">
<p>GPIO4</p>
</td>
</tr>
<tr>
<td width="136">
<p>3</p>
</td>
<td width="167">
<p>GPIO0</p>
</td>
</tr>
<tr>
<td width="136">
<p>4</p>
</td>
<td width="167">
<p>GPIO2</p>
</td>
</tr>
<tr>
<td width="136">
<p>5</p>
</td>
<td width="167">
<p>GPIO14</p>
</td>
</tr>
<tr>
<td width="136">
<p>6</p>
</td>
<td width="167">
<p>GPIO12</p>
</td>
</tr>
<tr>
<td width="136">
<p>7</p>
</td>
<td width="167">
<p>GPIO13</p>
</td>
</tr>
<tr>
<td width="136">
<p>8</p>
</td>
<td width="167">
<p>GPIO15</p>
</td>
</tr>
<tr>
<td width="136">
<p>9</p>
</td>
<td width="167">
<p>GPIO3</p>
</td>
</tr>
<tr>
<td width="136">
<p>10</p>
</td>
<td width="167">
<p>GPIO1</p>
</td>
</tr>
<tr>
<td width="136">
<p>11</p>
</td>
<td width="167">
<p>GPIO9</p>
</td>
</tr>
<tr>
<td width="136">
<p>12</p>
</td>
<td width="167">
<p>GPIO10</p>
</td>
</tr>
</tbody>
</table>
<p>[*] D0 (GPIO16) can only be used for GPIO read/write. It does not support open-drain/interrupt/PWM/I&sup2;C or 1-Wire.</p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong><u>Introduction to DHT11 Temperature and Humidity sensor</u></strong></p>
<p>DHT11 sensor measures and provides humidity and temperature values serially over a single wire.</p>
<p>It can measure the relative humidity in percentage (20 to 90% RH) and temperature in degree Celsius in the range of 0 to 50&deg;C.</p>
<p>It has 4 pins; one of which is used for data communication in serial form.</p>
<p>&nbsp;</p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>Interfacing Diagram</strong></p>
<p>NodeMCU interfaced with DHT11</p>
<p><strong>NodeMCU LUA based functions for DHT module</strong></p>
<p>Let&rsquo;s see the LUA based functions of NodeMCU that can be used for DHT modules to read the Temperature and Humidity.</p>
<p><strong>dht.read()</strong></p>
<p>This function is used to read data from all kinds of DHT sensors, including DHT11, 21, 22, 33, 44 humidity temperature sensors.</p>
<p><strong>Syntax:</strong> dht.read(pin)</p>
<p><strong>&nbsp;</strong></p>
<p><strong>&nbsp;</strong></p>
<p><strong>What is a Humidity Sensor?</strong></p>
<p>Humidity Sensors are the low cost-sensitive electronic devices used to measure the humidity of the air. These are also known as Hygrometers. Humidity can be measured as Relative humidity, Absolute humidity, and Specific humidity. Based on the type of humidity measured by the&nbsp;<a href="https://www.elprocus.com/sensors-types-applications/">sensor</a>, these are classified as Relative Humidity sensor and Absolute Humidity sensor.</p>
<p>Based on the parameters used to measure humidity, these sensors are also classified as Capacitive Humidity Sensor, Resistive Humidity Sensor, and Thermal Conductivity Humidity Sensor.</p>
<p>Some of the parameters to consider while choosing these sensors are Accuracy, Linearity, Reliability, Repeatability, and Response time.</p>
<p><strong>&nbsp;</strong></p>
<p><strong>Working Principle of Humidity Sensor</strong></p>
<p>Relative humidity sensors usually contain a humidity sensing element along with a thermistor to measure temperature. For a capacitive sensor, the sensing element is a capacitor. Here the change in electrical permittivity of the dielectric material is measured to calculate the relative humidity values.</p>
<p>Low resistivity materials are used for the construction of a Resistive sensor. This resistive material is placed on top of two electrodes. Change in the resistivity value of this material is used to measure the change in humidity.</p>
<p><strong>DHT11 Specifications:</strong></p>
<ul>
<li>Operating Voltage: 3.5V to 5.5V</li>
<li>Operating current: 0.3mA (measuring) 60uA (standby)</li>
<li>Output: Serial data</li>
<li>Temperature Range: 0&deg;C to 50&deg;C</li>
<li>Humidity Range: 20% to 90%</li>
<li>Resolution: Temperature and Humidity both are 16-bit</li>
<li>Accuracy: &plusmn;1&deg;C and &plusmn;1%</li>
</ul>
<p>&nbsp;</p>
<p>DHT11 Equivalent Temperature Sensors are:</p>
<ul>
<li>DHT22</li>
<li>AM2302</li>
<li>SHT71</li>
</ul>
<p>Other Temperature Sensors are:</p>
<ol>
<li>Thermocouple</li>
<li>TMP100</li>
<li>LM75</li>
<li>DS18820</li>
<li>SHT15</li>
<li>LM35DZ</li>
<li>TPA81</li>
<li>D6T</li>
</ol>
<p>&nbsp;</p>
<p><strong>Applications:</strong></p>
<ul>
<li>Measure temperature and humidity</li>
<li>Local Weather station</li>
<li>Automatic climate control</li>
<li>Environment monitoring</li>
</ul>
<p><strong>&nbsp;</strong></p>
<p><strong><u>&nbsp;</u></strong></p>
<p><strong><u>Introduction to OLED 128X32</u></strong></p>
<p>&nbsp;</p>
<p>&nbsp;</p>
<ul>
<li>OLED is an organic light-emitting diode that emits light in response to an electric current. An OLED display works with no backlight so it can display deep black levels. It is small in size and light in weight than Liquid Crystal Displays</li>
<li>128x64 OLED display is a simple dot-matrix graphic display. It has 128 columns and 64 rows which makes it a display of a total 128x64 = 8192 pixels. By just turning on/off these pixels led we can display a graphical image of any shape on it.</li>
</ul>
<p><strong>Specifications:</strong></p>
<ol>
<li>OLED display, no need backlight, self-illumination,</li>
<li>The display performance is better than the traditional LCD display, also lower consumption.</li>
<li>Driver IC: SSD1306</li>
<li>Size: 0.91 inch OLED</li>
<li>Resolution: 128 x 32</li>
<li>IIC interface</li>
<li>Display Color: white</li>
<li>Description:</li>
</ol>
<p>&nbsp; &nbsp;&nbsp;GND: Power Ground</p>
<p>&nbsp;&nbsp; VCC: Power + (DC 3.3 ~5v)</p>
<p>&nbsp;&nbsp; SCL: Clock Line</p>
<p>&nbsp;&nbsp; SDA: Data Line</p>
<p>&nbsp;</p>
<p>They do not require a backlight since the display creates its own light. Hence, they consume less power. Both I2C and SPI based OLED modules are available in the market.</p>
<p>OLED displays are driven by SSD1306 driver IC. SSD1306 is a CMOS OLED driver with a controller for the OLED dot-matrix graphic display system. Due to the use of the SSD1306 driver, the number of external components required and power consumption has reduced.</p>
<p>The OLED display is used for displaying text, images, and various patterns. It is also suitable for mobile phone sub-display, MP3 players, calculators, etc.</p>
<p>The OLED display has 256 steps for brightness control.</p>
<p>The OLED display is also available with different resolutions like 128x32, 128x64. The OLED display in the above image has a resolution of 128x64 pixels.</p>
<p><strong>Available Interfaces for OLED</strong></p>
<p>The OLED display module can be interfaced with microcontrollers using three interfaces given below:&nbsp; &nbsp;</p>
<p><strong>6800/8000 series compatible Parallel Interface</strong></p>
<p>In this interface, 8-bit data send/receive could be done through parallel lines i.e. D0-D7.</p>
<p><strong>I2C interface</strong></p>
<p>In this interface, data send/receive could be done serially through the SDA line.</p>
<p><strong>Serial Peripheral Interface</strong></p>
<p>In this interface, data send/receive could be done serially through SDI and SDO lines.</p>
<p>There are different types of OLED modules are available in the market, having different resolutions, communication protocol (as discussed in the above&nbsp;<strong>Available Interfaces for OLED</strong>&nbsp;section), and pixel colors (e.g. blue, yellow, white). Some modules support multi-colors as well.</p>
<p><strong>OLED Display Pins (I2C interface)</strong></p>
<p><strong>SDA (Serial Data):</strong></p>
<p>SDA is used to transmit data between master and slave. The data and acknowledgment are sent through SDA.</p>
<p><strong>SCL (Serial Clock):</strong></p>
<p>It is a clock signal. This pin transmits clocks to the slave, SCL. Data will be sent to other devices on the clock tick event. Only the master device has control over this SCL line</p>
<p><strong>VCC:</strong> This is a power supply pin. +3.3V supply is required. More than 3.3 V supply can damage the display.</p>
<p><strong>GND:</strong> This is the Ground pin. Connect the ground of supply to this pin.</p>
<p><strong>Row and Column Mapping on OLED</strong></p>
<ul>
<li>The display has a total of 8 pages, 64 rows, and 128 Columns.</li>
<li>Each page contains 8 rows and 128 columns.</li>
<li>The display has a total of 128 columns called segments.</li>
<li>For displaying data at the first location set page address to 0 and column address to 0. We should also select the end address of the page and column.</li>
<li>The maximum end address of the page is 07H and the Maximum column address is 7F H.</li>
</ul>
<p>&nbsp;</p>
<p><strong><u>Introduction to Capacitive Soil Moisture Sensor V2.0</u></strong></p>
<p>&nbsp;</p>
<p>The Capacitive Soil Moisture Sensor V2.0 measures soil moisture levels by capacitive sensing rather than resistive sensing like other sensors on the market. It is made of corrosion-resistant material which gives it an excellent service life. Insert it into the soil around your plants and monitor the moisture level.</p>
<p>This module includes an on-board voltage regulator which gives it an operating voltage range of 3.3 ~ 5.5V. It is perfect for low-voltage MCUs, both 3.3V, and 5V. For compatibility with a Raspberry Pi, it will need an ADC converter.</p>
<p><strong>SPECIFICATIONS</strong></p>
<p>Operating Voltage&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3.3 ~ 5.5 VDC</p>
<p>Output Voltage&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 0 ~ 3.0VDC</p>
<p>Operating Current&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 5mA</p>
<p>Interface&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;PH2.54-3P</p>
<p>Dimensions mm (LxWxH)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 98 x 23 x 4</p>
<p>Weight (gm)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 15</p>
<p><strong>&nbsp;</strong></p>
<p><strong>Features:</strong></p>
<ol>
<li>Supports 3-Pin Gravity Sensor interface</li>
<li>Analog output</li>
</ol>
<p><strong>Applications:</strong></p>
<ol>
<li>Garden plants</li>
<li>Moisture detection</li>
<li>Intelligent agriculture</li>
</ol>
<p>&nbsp;</p>
<p><strong>How Does a Capacitive Moisture Sensor Work?</strong></p>
<p>Simply stated, a capacitor stores electrical charge.</p>
<p>The electrical component known as a capacitor consists of three pieces. &nbsp;A positive plate, a negative plate, and space in-between the plates, known as the dielectric. &nbsp;The physical form and construction of practical capacitors vary widely and many&nbsp;capacitor types&nbsp;are in common use. Most capacitors contain at least two&nbsp;electrical conductors&nbsp;often in the form of metallic plates or surfaces separated by a&nbsp;<strong>dielectric</strong>&nbsp;medium.</p>
<p>A capacitive moisture sensor works by measuring the changes in capacitance caused by the changes in the dielectric.&nbsp;It does not measure moisture directly (pure water does not conduct electricity well), &nbsp;instead, it measures the ions that are dissolved in the moisture &nbsp;These ions and their concentration can be affected by a number of factors, for example adding fertilizer for instance will decrease the resistance of the soil. &nbsp;Capacitive measuring basically measures the dielectric that is formed by the soil and the water is the most important factor that affects the dielectric.</p>
<p>Capacitive measuring has some advantages, It not only avoids corrosion of the probe but also gives a better reading of the moisture content of the soil as opposed to using a resistive soil moisture sensor. &nbsp; Since the contacts (the plus plate and the minus plate of the capacitor) are not exposed to the soil, there is no corrosion of the sensor itself.</p>
<p>The capacitance of the sensor is measured by means of a&nbsp;<strong>555</strong>&nbsp;based circuit that produces a voltage proportional to the capacitor inserted in the soil. &nbsp; We then measure this voltage by use of an Analog to Digital Converter which produces a number that we can then interpret as soil moisture.</p>
<p>The final output value is affected by probe insertion depth and how tight the soil packed around it is. Value_1 is the value for dry soil and Value_2 is the value for saturated soil.<br /> For example: Value_1 = 520; Value_2 = 260.<br /> The range will be divided into three sections: dry, wet, water. Their related values are:</p>
<ul>
<li>Dry: (520 430]</li>
<li>Wet: (430 350]</li>
<li>Water: (350 260]</li>
</ul>
<p>Assuming&nbsp;<strong>linearity</strong>,&nbsp; you can convert these values to a &ldquo;percent&rdquo; of water. &nbsp;Just remember, in reality, Dry is not 0% moisture and &ldquo;Water&rdquo; may not be 100% moisture, at least at the lower values. &nbsp;Still, it is a useful measurement.</p>
<p>&nbsp;</p>
<p>System design flow</p>
<p>&nbsp;</p>
<p><strong>SUMMARY AND CONCLUSION</strong></p>
<p>Plant monitoring and smart gardening system using IoT with the help of a micro-controller helps to ease the most tedious job of gardening for plant lovers who are in a time of rush. This system monitors various garden parameters and informs the user about the details of the garden through their smartphone.&nbsp; It also helps to solve many issues occurring in the existing plant watering and gardening system. It helps to save water and utility bills.&nbsp; Plant monitoring and smart gardening using&nbsp; IoT with the help of the microcontroller will bring more convenience and comfort to people&lsquo;s lives for taking care of their garden.&nbsp; Any&nbsp; Android supported device can be used to install the smart gardening system. The user can control and monitor the environment of the garden using the android application. The controller in this system&nbsp; (Raspberry&nbsp; Pi)&nbsp; provides&nbsp; an&nbsp; economic and efficient platform to implement the plant monitoring and smart gardening system using IOT [16]. The main advantage of the smart gardening system is that the user can monitor the garden using the&nbsp; internet from&nbsp; far&nbsp; distances&nbsp; during&nbsp; leisure time&nbsp; or whenever necessary.</p>
<p><strong>FUTURE ASPECTS :-</strong></p>
<p>In future aspects we can develop a robot which compares the color of the leaf with an already saved picture of the leaf using digital&nbsp; image&nbsp; processing&nbsp; technique&nbsp; to&nbsp; identify&nbsp; whether&nbsp; the plant is&nbsp; in good&nbsp; condition or if&nbsp; there is&nbsp; any other nutritional deficiency. This can be further developed by making the robot to&nbsp; take&nbsp; care&nbsp; of&nbsp; the&nbsp; whole&nbsp; garden&nbsp; without&nbsp; the&nbsp; presence&nbsp; of humans.Digital&nbsp; Image&nbsp; processing&nbsp; technique&nbsp; to&nbsp; identify&nbsp; the plant&lsquo;s health. Further can be&nbsp; developed for smart agriculture, where robots may be used for harvesting yield and manure.</p>
<p>&nbsp;</p>
<p><strong>REFERENCES:-</strong></p>
<ul>
<li>COM</li>
<li>Wikipedia</li>
<li>UIET FACULTY</li>
<li>National Institute of Electronics and Information Technology Faculty</li>
<li>Android Developer Forum</li>
</ul>
