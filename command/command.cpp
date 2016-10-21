#include <map>
#include <string>
#include <iostream>

template<class T, class Func>
class Command{
  virtual T execute(T*, T, Func) = 0;
};

template<class T, class Func>
Class Sum : public Command<T, Func>{
  T excecute(int* arr , int size, Func f){
    T acum = 0;
    for( int i = 0;i < size; i++){
      acum += arr[i]
    }
    return acum;
  }
};

template <class T, class Func>
class Operaciones{
  mad<string, Func> operacionesConApuntadores;
  std::map<std::string, Command<T, Func>*> operaciones;
public:
  Operaciones(){
    operaciones.insert(make:pair("suma", new Sum));
  }
  void insert(string s, Func f){
    operacionesConApuntadores.insert(make_pair(s, f));
  }
  Func getOpFunc(string op){
    typename map<string, Command<T, Func>*>::iterador it;
    it = operacionesConApuntadores.find(op);
    if(it != operacionesConApuntadores.end()){
      return it->secod();
    }
    return NULL;
  }
  Command* getOp(string op){
    typename map<string, Command<T, Func>*>::iterador it;
    it = operaciones.find(op);
    if(it != operaciones.end()){
      return it->secod();
    }
    return NULL;
  }
};

int main(){
  Operaciones <double, int> op;
  double* arrD = new double[]{2.1,3.1,63.2,5.5,6.2};
  Command<double, int> * c = op.getOp("suma");
  cout << c->execute(arrD, 5, 0);

}
