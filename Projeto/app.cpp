#include "app.h"

APP::APP(string n, string v){
  setnome(n);
  setversao(v);
}
void APP::setnome(string n){
  nome= n;
}

void APP::setversao(string v){
  versao=v;
}