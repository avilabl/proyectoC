/*
Teclado.h - codigo para captura el teclado de 5 puntos(arriba,abajo,derecha,izquierada,enter)
recibe por el pin8 al pin12 inclusible lee oa
created by Avila,Brian Leonel, 14 de mayo de 2024
*/

#ifndef Teclado_h
#define Teclado_h

#include <Arduino.h>

class Teclado
{
  public:
    Teclado();
    int pulsado();
  private:
    int _tecla;
};

#endif