/*

Segundo examen parcial 
main.cpp

*/


#include "PenaObservable.hpp"
#include "HilarieObservable.hpp"
#include "TrumpObservable.hpp"
#include "CNNObserver.hpp"
#include "RadioObserver.hpp"
#include "AztecaObserver.hpp"
#include "TelevisaObserver.hpp"
#include "MVSObserver.hpp"


int main(){
  PenaObservable pena;
  HilarieObservable hilarie;
  TrumpObservable trump;
  CNNObserver cnn;
  RadioObserver radio;
  AztecaObserver azteca;
  TelevisaObserver televisa;
  MVSObserver mvs;

  std::cout << "Hola!\n elige las opciones que más se adecuen a tus necesidades" << std::endl;
  pena.registerObserver(&mvs);
  pena.registerObserver(&radio);
  pena.registerObserver(&azteca);
  pena.registerObserver(&televisa);
  
  hilarie.registerObserver(&televisa);
  hilarie.registerObserver(&mvs);
  hilarie.registerObserver(&radio);
  hilarie.registerObserver(&azteca);
  hilarie.registerObserver(&cnn);

  trump.registerObserver(&cnn);
  trump.registerObserver(&azteca);
  trump.registerObserver(&cnn);
  trump.registerObserver(&cnn);
  trump.registerObserver(&cnn);

  std::cout << "Quien eres? \n1.- CNN\n2.- MVS Noticias\n3.- Radio Fórmula\n4.- TV Azteca\n5.- Televisa" << std::endl;
  int op;
  std::cin >> op;
  switch (op){
  case 1:
    {
      std::cout << "De quien vas a publicar?\n1.- Hilarie\n2.- Peña\n3.- Trump" << std::endl;
      int op2;
      std::cin >> op2;
      switch (op2){
      case 1:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  hilarie.new_note(id);
	}
      case 2:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  pena.new_note(id);
	}
      case 3:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  trump.new_note(id);
	}
      }
    }
  case 2:
    {
     std::cout << "De quien vas a publicar?\n1.- Hilarie\n2.- Peña\n3.- Trump" << std::endl;
     int op2;
     std::cin >> op2; 
     switch (op2){
      case 1:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  hilarie.new_note(id);
	}
      case 2:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  pena.new_note(id);
	}
      case 3:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  trump.new_note(id);
	}
      }
  }
  case 3:
    {
      std::cout << "De quien vas a publicar?\n1.- Hilarie\n2.- Peña\n3.- Trump" << std::endl;
      int op2;
      std::cin >> op2;
      switch (op2){
      case 1:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  hilarie.new_note(id);
	}
      case 2:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  pena.new_note(id);
	}
      case 3:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  trump.new_note(id);
	}
      }
    }
  case 4:
    {
      std::cout << "De quien vas a publicar?\n1.- Hilarie\n2.- Peña\n3.- Trump" << std::endl;
      int op2;
      std::cin >> op2;
      switch (op2){
      case 1:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  hilarie.new_note(id);
	}
      case 2:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  pena.new_note(id);
	}
      case 3:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  trump.new_note(id);
	}
      }
    }

  case 5:
    {
      std::cout << "De quien vas a publicar?\n1.- Hilarie\n2.- Peña\n3.- Trump" << std::endl;
      int op2;
      std::cin >> op2;
      switch (op2){
      case 1:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  hilarie.new_note(id);
	}
      case 2:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  pena.new_note(id);
	}
      case 3:
	{
	  int id;
	  std::cout << "Pon el ID de la nueva nota" << std::endl;
	  std::cin >> id;
	  trump.new_note(id);
	}
      }
    }
  }
  return 0;
}
