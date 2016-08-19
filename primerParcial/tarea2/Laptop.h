#include "Computers.h"
#include <string>

Class Laptop : public Computers{
 private:
  Laptop(){}
 public:
  static Laptop* create();
};
