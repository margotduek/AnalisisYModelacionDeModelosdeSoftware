#include "Computers.h"
#include "Factory.h"
#include "Desktop.h"
#include "Netbook.h"
#include "Laptop.h"
#include "Tablet.h"
#include <iostream>
#include <string>

using namespace std;





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






int main(){
  Factory * factory = Factory::getcomp();
  cout << "Hola, que computadora deceas comprar?\n 1 - Desktop\n 2 - Laptop\n 3 - Netbook\n 4 - Tablet\n" << endl;
  int comp_type;
  cin >> comp_type;  
  
  switch(comp_type){
  case 1: {
    cout << "Desktop" << endl;
    Computers * desk = factory->create(ComputerType::desktop);
  }
  case 2: {
    cout << "Laptop" << endl;
    Computers * lap = factory->create(ComputerType::laptop);
  }
 case 3: {
    cout << "Netbook" << endl;
    Computers * net = factory->create(ComputerType::netbook);
  }
 case 4: {
    cout << "Tablet" << endl;
    Computers * tab = factory->create(ComputerType::tablet);
  }
  }
  component_selection(comp_type);
  component_assembly(comp_type);
  software_instalation(comp_type);
  packing_computer(comp_type);
  


  return 0;
}
