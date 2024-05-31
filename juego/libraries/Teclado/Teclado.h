/*
Teclado.h - codigo para captura el teclado de 5 puntos(arriba,abajo,derecha,izquierada,enter)
recibe por el pin8 al pin12 inclusible lee oa
created by Avila,Brian Leonel, 14 de mayo de 2024
*/
#ifndef Teclado_h
#define Teclado_h

#include "Teclado.h"
#include <Arduino.h>
#include <util/delay.h>

int Teclado(void){
int boton=0;
int tecla;
	tecla=PINB;
    
    if(tecla!=B11111){
      _delay_ms(2);
      tecla=PINB;

      switch (tecla){
        case B00011110:{//enter
          boton=1;
          break;
        }
        case B00011101:{//arriba
        boton=2;
          break;
        }
        case B00011011:{//derecho
          boton=3;
          break;
        }
        case B00010111:{//abajo
          boton=4;
          break;
        }
        case B00001111:{//izquierda
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






#endif