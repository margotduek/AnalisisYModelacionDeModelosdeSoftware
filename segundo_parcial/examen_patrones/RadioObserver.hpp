/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"



#ifndef RADIOOBSERVER
#define RADIOOBSERVER

class RadioObserver : public Observer {
public:
  virtual void update(int data);
 
};

void RadioObserver::update(int data){
  std::cout << "Nueva noticia del buen Peña Nieto" << std::endl;
}

#endif
