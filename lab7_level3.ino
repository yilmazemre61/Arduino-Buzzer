// C++ code
// Emre YILMAZ
// 13.07.2021

int buzzerPin = 5; // buzzer is set to pin 5
int button = 2; // button is set to pin 2
int redLed = 9; // red led is set to pin 9
int greenLed = 11; // green led is set top pin 10
int blueLed = 10; // blue led is set to 



//  Library  \\
                      
#define NOTE_C4  262  
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988



void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  
  songTone();
  
}


void songTone()
{
  int notes[] = {     // the notes  
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,
   NOTE_A4, NOTE_A4, 
  };
  
  int duration[] = {   // the durations
    125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 375, 125, 
    125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 375, 125, 
    125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 250, 125, 125, 125, 125, 125, 250, 

  };
  
  if(digitalRead(button) == HIGH){ // if the button is pressed the buzzer will start to ring
    for(int i=0; i<78; i++){ // for loop to iterate all the notes and durations
      tone(buzzerPin, notes[i], duration[i]);
      delay(duration[i]);
      if(i % 2 == 0){ // if the i equals to even number the red led will be on - off
        digitalWrite(redLed, HIGH);
        digitalWrite(redLed, LOW);
      }else if(i % 2 == 1){ // if the i equals to odd number the green led will be on - off
        digitalWrite(greenLed, HIGH);
        digitalWrite(greenLed, LOW);
      }
      	// the blue led will be on - off in every iteration
        digitalWrite(blueLed, HIGH);
        digitalWrite(blueLed, LOW);   
    }
  
  }

}












































