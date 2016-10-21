/*
Examen segundo parcial

*/

#include "Observable.hpp"
#include <iostream>
class HilarieObservable : public Observable {
 public:
  void new_note(int id_note);
};

void HilarieObservable::new_note(int id_note) {
  std::cout << "Nueva nota de Hilarie" << std::endl;
  notifyObservers(id_note);
}
