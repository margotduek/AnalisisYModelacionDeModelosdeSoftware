#include <string>
#include <iostream>
#include "ComputerType.h"

class Computers{
 public:
  virtual Computers* create(ComputerType type) = 0;
};
