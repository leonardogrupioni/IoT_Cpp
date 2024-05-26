int readValue1 = 0;   
int readValue2 = 0;                  
 
void setup()
{
  Serial.begin(9600); // => start monitor serial
}
 
void loop()
{
  readValue1 = analogRead(A0); // => read the value from LDR
  Serial.println(readValue1);
  delay(100);
  
  readValue2 = analogRead(A1); // => read the value from LDR
  Serial.println(readValue2);
  Serial.println("teste");
  delay(100);                   
}
