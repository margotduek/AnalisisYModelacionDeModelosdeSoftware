#include <string>
#include <iostream>
#include "Cop.h"

class Desktop : public Cop{
 private:
  Desktop() {}
 public:
  std::string describe();
  static Desktop * create();
};
