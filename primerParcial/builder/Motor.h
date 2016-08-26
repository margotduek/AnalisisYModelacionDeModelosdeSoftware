include <string>

class Motor{
 private: 
  int serie;
  std::string brand;
  int potencia;
 public: 
  int get_potencia();
  int get_serie();
  std::string get_marca();
};
