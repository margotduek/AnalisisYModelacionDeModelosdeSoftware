



int main(){
  Director * dir = new Director();
  dir->set_builder(new Builder_Boeing());
  dir->construct();

  Avion* avion = dir->get_avion();

  return 0;
}
