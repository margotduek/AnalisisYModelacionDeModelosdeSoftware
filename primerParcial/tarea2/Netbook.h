#include "Computers.h"

Class Netbook : public Computers{
 private:
  Netbook(){}
 public:
  static Netbook* create();
};
