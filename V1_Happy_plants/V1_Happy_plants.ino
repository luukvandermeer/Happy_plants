
/* WERKT - Water meter voor het vleesetende plantje
Print values from analog pin A0 to serial monitor 
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));
  delay(210);
}
*/



/* Code voor temperatuur meter
#include <dht.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

dht DHT;

#define DHT11_PIN A5

void setup(){
  lcd.begin(16, 2);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
 lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  Serial.print(DHT.temperature);
  Serial.print(DHT.humidity);
  delay(1000);
}
*/

/* Code voor moisture meter
#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(5, 4);
// These constants won't change. They're used to give names
// to the pins used:
const int analogInPin = A5; // Analog input pin that the Sensor is attached to
int sensorValue = 0; // value read from the Soil Moisture 
void setup() {
// set up the LCD's number of columns and rows:

lcd.begin(16, 2);
delay(100);
} 
void loop() {
lcd.clear();
lcd.print("Soil Moisture:");// print the results to the LCD Display:
sensorValue = analogRead(analogInPin);// read the analog in value:
lcd.setCursor(0, 1);
lcd.print(sensorValue);
// wait 300 milliseconds before the next loop for the 
//analog-to-digital converter to settle after the last reading:
delay(300);
}
*/
