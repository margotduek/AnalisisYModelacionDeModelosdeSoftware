#include "Cop.h"

class Tablet : public Computers{
 private:
  Tablet(){}
 public:
  std::string describe();
  static Tablet* create();
};

