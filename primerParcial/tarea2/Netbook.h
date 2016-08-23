#include "Cop.h"

class Netbook : public Computers{
 private:
  Netbook(){}
 public:
  std::string describe();
  static Netbook* create();
};
