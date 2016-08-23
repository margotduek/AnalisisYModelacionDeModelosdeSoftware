#include <string>
#include <iostream>
#include "ComputerType.h"
#include "Cop.h"

class Computers{
 public:
  virtual Cop* create(ComputerType type) = 0;
};
