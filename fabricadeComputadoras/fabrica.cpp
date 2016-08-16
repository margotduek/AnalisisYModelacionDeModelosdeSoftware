#include <iostream>
using namespace std;

int component_selection(int computer_type);
int component_assembly(int computer_type);
int software_instalation(int computer_type);
int packing_computer(int computer_type);

int main(){
  cout << "Hola, que computadora deceas comprar?\n 1 - Desktop\n 2 - Laptop\n 3 - Netbook\n 4 - Tablet\n" << endl;
  int comp_type;
  cin >> comp_type;
  component_selection(comp_type);
  component_assembly(comp_type);
  software_instalation(comp_type);
  packing_computer(comp_type);
  
  return 0;
}

int component_selection(int computer_type){
  cout << "Seleccionando los componentes" << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n..\n." << endl;
  return 0;
}

int component_assembly(int computer_type){
  cout << "ensamblando componentes" << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n..\n." << endl;
  return 0;
}

int software_instalation(int computer_type){
  cout << "instalando y configurando software" << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n..\n." << endl;
  return 0;
}

int packing_computer(int computer_type){
  cout << "empaquetando la computadora" << endl;
  cout << ".\n..\n...\n....\n...\n.." << endl;
  cout << ".\n..\n...\n....\n...\n..\n." << endl;
  return 0;
}



