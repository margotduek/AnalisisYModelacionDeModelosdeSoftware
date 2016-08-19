#include "Computers.h"

Class Tablet : public Computers{
 private:
  Laptop(){}
 public:
  static Tablet* create();
};

