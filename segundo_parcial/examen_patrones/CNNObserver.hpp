/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"

class CNNObserver : public Observer {
public:
  virtual void update(int data);
  
};


void CNNObserver::update(int data){
  std::cout << "Nueva noticia Hilarie" << std::endl;
}

