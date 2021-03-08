

void setup() {
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    
}

void loop() {
    for (int i = 0; i <= 255; i++) {
        analogWrite(3, i);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(25);
        
    }

    for (int i = 255; i>= 0; i--){
        analogWrite(3, i);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        delay(25);
        
    }
}


