
const int pin1 = 2; // begin first wire
const int pin2 = 3; // begin second wire
const int pin3 = 4; // begin third wire
const int pin4 = 5; // end first wire
const int pin5 = 6; // end second wire
const int pin6 = 7; // end third wire
const int pushbutton = 8;

const int led1 = 9; // LED wire1
const int led2 = 10; // LED wire2
const int led3 = 11; // LED wire3

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, INPUT);
  pinMode(pin5, INPUT);
  pinMode(pin6, INPUT);
  pinMode(pushbutton, INPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {
 
 if (digitalRead(pushbutton) == HIGH;)
   {

      //wire first
      
      digitalWrite(pin1, HIGH);
      delay_ms(10);
      if (digitalRead(pin4) == HIGH)
      {
        delay_ms(100);
        if (digitalRead(pin4) == HIGH)
            {
            digitalWrite(led1, HIGH);
            }
        else
            {
            digitalWrite(led1, LOW);
            }
      }
      else
     {
       digitalWrite(led1, LOW);
      }


     //wire second
     digitalWrite(pin2, HIGH);
      delay_ms(10);
      if (digitalRead(pin5) == HIGH)
      {
        delay_ms(100);
        if (digitalRead(pin5) == HIGH)
            {
            digitalWrite(led2, HIGH);
            }
        else
            {
            digitalWrite(led2, LOW);
            }
      }
      else
     {
       digitalWrite(led2, LOW);
      }


    //wire third
     digitalWrite(pin3, HIGH);
      delay_ms(10);
      if (digitalRead(pin6) == HIGH)
      {
        delay_ms(100);
        if (digitalRead(pin6) == HIGH)
            {
            digitalWrite(led3, HIGH);
            }
        else
            {
            digitalWrite(led3, LOW);
            }
      }
      else
     {
       digitalWrite(led3, LOW);
      }
    }
  delay(1);
}
