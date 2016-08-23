#include "Cop.h"
#include <string>

class Laptop : public Computers{
 private:
  Laptop(){}
 public:
  std::string describe();
  static Laptop* create();
};
