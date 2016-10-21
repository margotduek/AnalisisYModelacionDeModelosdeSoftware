/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"

class TelevisaObserver : public Observer {
public:
  virtual void update(int data);

};

void TelevisaObserver::update(int data){
  std::cout << "Nueva noticia del buen Peña Nieto" << std::endl;
}
