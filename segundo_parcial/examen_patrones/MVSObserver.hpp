/*
Examen segundo parcial 

*/

#include <iostream>
#include "Observer.hpp"

class MVSObserver : public Observer {
public:
  virtual void update(int data);
};

void MVSObserver::update(int data){
  std::cout << "Nueva noticia del buen Peña Nieto" << std::endl;
}
