/*
Examen segundo parcial

*/

#include "Observable.hpp"
#include <iostream>
class TrumpObservable : public Observable {
 public:
  void new_note(int id_note);
};

void TrumpObservable::new_note(int id_note) {
  notifyObservers(id_note);
  std::cout << "nueva nota de Trump" << std::endl;
}
