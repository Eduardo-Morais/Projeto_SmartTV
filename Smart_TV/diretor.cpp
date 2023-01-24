#include "diretor.h"


Diretor::Diretor(string n,int o):Pessoa(n){
  setobras(o);
}

void Diretor::setobras(int o){
  obras=o;
}