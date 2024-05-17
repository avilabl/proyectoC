#include "Arduino.h"
#include "Teclado.h"

Teclado::Teclado():
{}

int Teclado::pulsado(){
  int boton=0;
	_tecla=PINB
    
    if(_tecla!=B00011111){
      _delay_ms(5);
      switch (_tecla){
        case B00011110:{
          boton=1;
          break;
        }
        case B00011101:{
          boton=2;
          break;
        }
        case B00011011:{
          boton=3;
          break;
        }
        case B00010111:{
          boton=4;
          break;
        }
        case B00001111:{
          boton=5;
          break;
        }
        default:{
          boton=0;
        }
      }
    }
return boton;
  }
