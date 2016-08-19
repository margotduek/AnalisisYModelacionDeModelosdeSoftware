#include "Computers.h"
#include <string>
#include <iostream>

Class Desktop : public Computers{
 private:
  Desktop() {}
 public:
  static Desktop* create();
};
