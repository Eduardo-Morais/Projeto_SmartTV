#include "producao.h"



Producao::Producao(string n){
  setnome(n);
}

void Producao::setnome(string n){
  nome=n;
}

void Producao::addAtor(Ator &a){
  list_a.push_back(a);
}
void Producao::removAtor(Ator &a){
   for (int i = 0; i < list_a.size(); i++) {
        if (a.getnome() == list_a[i].getnome()) {
            list_a.erase(list_a.begin() + i);
        }
    }
}

void Producao::addDiretor(Diretor &d){
  list_d.push_back(d);
}
void Producao::removDiretor(Diretor &d){
   for (int i = 0; i < list_a.size(); i++) {
        if (d.getnome() == list_d[i].getnome()) {
            list_d.erase(list_d.begin() + i);
        }
    }
}


