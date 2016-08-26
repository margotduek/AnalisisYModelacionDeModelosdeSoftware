


class Builder{
 protected:
  Avion* avion;

 public:
  Avion get_avion();
  Avion create_avion();
  virtual void build_alas() = 0;
  virtual void build_motor() = 0;
  virtual void build_brand() = 0;
  virtual void buid_serie() = 0;
};
