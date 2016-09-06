#include "Iterador_en_clase.cpp"

int main(){
  Persoan p1(20);
  Persona p2(30);
  Agregate<Persona> lista;
  lista.add(p1);
  lista.add(p2);
  
  for (Iterator<Persona i = lista.get_iterator(); i.has_next(); )
    cout << i.next().get_edad();

  delete i;

  return 0;
}
