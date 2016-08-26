#include "Builder_Boeing.h"

void build_alas(){
  Alas  * alas = new Alas();
  alas->set_marca("Boeing");
  avion->set_alas(alas);
}

void build_motor(){
  Motor * motor = new Motor();
  motor->set_potencia(300);
  avion->set_motor(motor);
}

void build_brand(){
  avion->set_marca("Boeing");
}

void build_serie(){
  avion->set_serie(56987);
}
