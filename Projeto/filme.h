#ifndef FILME_H
#define FILME_H
#include "producao.h"

class Filme:public Producao{

public:
Filme(string n,string t);
virtual void printProdu();

private:
string duracao;

};



#endif