 
 #define my_led 7
#define led2 2
#define led3 6
void setup()
{
  Serial.begin(9600);
  pinMode(my_led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
  
  digitalWrite(my_led,HIGH);
  Serial.println("LED is ON");
  delay(1000); 
  digitalWrite(my_led,LOW);
  Serial.println("LED is OFF");
  delay(1000); 
  digitalWrite(led2,HIGH);
  Serial.println("LED is ON");
  delay(1000); 
  digitalWrite(led2,LOW);
  Serial.println("LED is OFF");
  delay(1000);
  digitalWrite(led3,HIGH);
  Serial.println("LED is ON");
  delay(1000); 
  digitalWrite(led3,LOW);
  Serial.println("LED is OFF");
  delay(1000); 
  
}
*/
void loop()
{
// put your main code here, to run respectively:
  
 digitalWrite(my_led,HIGH);
  Serial.println("LED1 is ON");
  digitalWrite(led2,HIGH);
  Serial.println("LED2 is ON");
  digitalWrite(led3,HIGH);
  Serial.println("LED3 is ON");
  delay(1000); 
 digitalWrite(my_led,LOW);
    Serial.println("LED1 is OFF");
 
  digitalWrite(led2,LOW);
  Serial.println("LED2 is OFF");
  
  digitalWrite(led3,LOW);
  Serial.println("LED3 is OFF");
  delay(1000); 
}
  
