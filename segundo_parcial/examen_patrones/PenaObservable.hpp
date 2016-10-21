/*
Examen segundo parcial

*/

#include <iostream>
#include "Observable.hpp"
class PenaObservable : public Observable {
 public:
  void new_note(int id_note);
};

void PenaObservable::new_note(int id_note) {
  std::cout << "Nueva nota de PEña" << std::endl;
  notifyObservers(id_note);
}
