/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"


#ifndef TELEVISAOBSERVER
#define TELEVISAOBSERVER

class TelevisaObserver : public Observer {
public:
  virtual void update(int data);

};

void TelevisaObserver::update(int data){
  std::cout << "Nueva noticia del buen Peña Nieto" << std::endl;
}

#endif
