void setup()
{
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    

    analogWrite(8,255);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(5000);
    analogWrite(8,0);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(0);
}
void loop()
{

}
