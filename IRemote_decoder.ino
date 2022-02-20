// Include IR library
#include <IRremote.hpp>

// Receiving pin 
#define IR_IN 12

//define IR buttons
#define CH 0xFF629D
#define PLAY 0xFFC23D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define CH+ 0xFFE21D
#define CH- 0xFFA25D
#define VOL+ 0xFFA857
#define VOL- 0xFFE01F
#define EQ 0xFF906F
#define B100 0xFF9867
#define B200 0xFFB04F
#define ZERO 0xFF6897
#define ONE 0xFF30CF
#define TWO 0xFF18E7
#define THREE 0xFF7A85
#define FOUR 0xFF10EF
#define FIFE 0xFF38C7
#define SIX 0xFF5AA5
#define SEVEN 0xFF42BD
#define EIGHT 0xFF4AB5
#define NINE 0xFF52AD


IRrecv irrecv(IR_IN); // IR init
decode_results results; // IR output pointer

void setup(void) {
  Serial.begin(9600); // Start serial debug
  irrecv.enableIRIn(); // Start IR receiving
}

void loop(void) {
selector(); 
}

void selector(void){
  if ( irrecv.decode( &results )) {
    switch(results.value){

      case ZERO:
      Serial.println("btn ZERO pressed");
      break;

      case ONE:
      Serial.println("btn ONE pressed");
      break;

      case TWO:
      Serial.println("btn TWO pressed");
      break;

      case THREE:
      Serial.println("btn THREE pressed");
      break;

      case FOUR:
      Serial.println("btn FOUR pressed");
      break;

      case FIFE:
      Serial.println("btn FIFE pressed");
      break;

      case SIX:
      Serial.println("btn SIX pressed");
      break;

      case SEVEN:
      Serial.println("btn SEVEN pressed");
      break;

      case EIGHT:
      Serial.println("btn EIGHT pressed");
      break;

      case NINE:
      Serial.println("btn NINE pressed");
      break;

      case PLAY:
      Serial.println("btn PLAY pressed");
      break;

      case PREV:
      Serial.println("btn PREV pressed");
      break;

      case NEXT:
      Serial.println("btn NEXT pressed");
      break;

      case EQ:
      Serial.println("btn EQ pressed");
      break;
      }
    
      Serial.println( results.value, HEX );
      irrecv.resume();  
  }
}
