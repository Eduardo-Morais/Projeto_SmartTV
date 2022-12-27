#include "ator.h"

Ator::Ator(string n, string t):Pessoa(n){
  settemp(t);
}

void Ator::settemp(string t){
  tempo=t;
}