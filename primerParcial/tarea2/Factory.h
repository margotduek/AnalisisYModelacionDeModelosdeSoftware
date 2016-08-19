




Class Factory : public Computers{
 private: 
  static Factory* comp;
  Factory() { }
 public:
  Computers* create(ComputerType type);
  static Factory* getcomp();
};
