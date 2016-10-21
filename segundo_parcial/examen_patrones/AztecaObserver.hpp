/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"

#ifndef AZTECAOBSERVER
#define AZTECAOBSERVER


class AztecaObserver : public Observer {
public:
  virtual void update(int data);

};

void AztecaObserver::update(int data){
  std::cout << "Nueva noticia del buen Peña Nieto" << std::endl;
}

#endif
