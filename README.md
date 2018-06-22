# Arduino-LCD-Rolling-Text
A Source Code for 16x2 LCD Rolling Text. Can be used for any text.

<h2>Tested with Arduino Mega 2560 & Arduino Uno</h2>
<strong>This Source code only suitable for 16x2 LCD with I2C</strong><br/>

<h2>Library You Need:</h2>
<ol>
  <li>Wire.h</li>
  <li>LCD.h</li>
  <li>LiquidCrystal_I2C.h</li>
</ol>

<strong>Please scan your LCD address first before use this source code.!</strong>

<h2>Instant Usage:</h2>
<ol>
  <li><strong>Setting for Text:</strong><br/>
    Change the text on: <strong>char mytext[]</strong><br/>
    <strong>DEFAULT:</strong> char mytext[] = "Hello, this is milstrike speaking. "; <br/>
    You can change the text at will. For example: <strong>char mytext[] = "Hello, my name is John. ";</strong><br/>
    <u>NOTES: </u> Don't forget to add a white space in the end of the text!
  </li>
  <li><strong>Setting for LCD Line:</strong><br/>
    To select which line to use, please change the variable on: <strong>int lcdLine = 0;</strong><br/>
    <ul>
      <li><strong>int lcdLine = 0;</strong>: The text will be displayed in line 1</li>
      <li><strong>int lcdLine = 1;</strong>: The text will be displayed in line 2</li>
    </ul>
  </li>
  <li><strong>Setting for Text Roll Speed:</strong><br/>
    To set the text roll speed, please change the variable on: <strong>int rollSpeed = 250;</strong><br/>
    <u>NOTES: in millis</u>
  </li>
  <li><strong>Setting for Delay between roll:</strong><br/>
    To set the delay between roll, please change the variable on: <strong>int delayPerRoll = 1000;</strong><br/>
    <u>NOTES: in millis</u>
  </li>
</ol>
