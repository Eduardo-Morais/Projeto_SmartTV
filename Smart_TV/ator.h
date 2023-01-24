#ifndef ATOR_H
#define ATOR_H

#include "pessoa.h"

class Ator:public Pessoa{
public:
Ator(string n,string t);
void settemp(string t);
string gettemp(){return tempo;}

private:
string tempo;

};


#endif