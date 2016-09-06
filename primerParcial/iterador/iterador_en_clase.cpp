template<class T>
class Iterator;

template<class T>
class Agregate{
public:
  friend class Iterator<T>;
  Agregate() : pos(0), lista(new T[size])
  {

  }

  void add(T element){
    //validar si si hay espacio 
    lista[size++] = element;
  }

  Iterator<T> get_iterator(){
    return new Iterator<T>(*this);
  }

  ~Agregate(){
    delete [] lista;
    
  }
  T get_element_at(int pos){
    return lista[pos];
  }
private:
  T* lista;
  int size = 10;
  int pos;
};


template<class T>
class Iterator{
public:
  
  Iterator(const Agregate<T>& lista)
  {
    this->lista = lista;
    idx = 0;
  }
  T next(){
    if(has_next())
      return lista->get_element_at(idx++);
      // si fuera con friends sería 
      // return lista->lista[idx++];
    else 
      return NULL;
  }
  bool has_next(){
    return (idx < lista->get_size());
  }
  ~Iterator(){
    delete [] lista;
  }

private:
  Iterator(){}
  Agregate<T> lista
  int idx;

};


class Persona{
public:
  Persoan(int edad) : edad(edad){}
  int get_edad(){return edad;}
  Persona(){}
  ~Persona();
private:
  int edad;
};
