int x=0;
float voltage,centigrade,fahrenheit;

void setup() {

Serial.begin(9600);
}

void loop() {

x=analogRead(A0);
voltage=x*(5.0/1023.0);
centigrade=voltage/0.01;

Serial.print("Voltage: ");
Serial.print(voltage);
Serial.print("V | ");

Serial.print("Heat: ");
Serial.print(centigrade);
Serial.print("\xC2\xB0");
Serial.print("C | ");

fahrenheit=(centigrade*9.0/5.0)+32.0;
Serial.print(fahrenheit);
Serial.print("\xC2\xB0");
Serial.println("F | ");

delay(1000);
}
