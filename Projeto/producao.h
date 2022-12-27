#ifndef PRODUCAO_H
#define PRODUCAO_H

#include <vector>
#include <string>
#include "diretor.h"
#include "ator.h"
#include <iostream>

using namespace std;

class Producao{

public:

Producao(string n);
void setnome(string n);
string getnome(){return nome;}

void addAtor(Ator &);
void removAtor(Ator &);

void addDiretor(Diretor &);
void removDiretor(Diretor &);

virtual void printProdu()=0;

protected:

string nome;
vector<Diretor> list_d;
vector<Ator> list_a;

};




#endif