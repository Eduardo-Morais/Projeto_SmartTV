#ifndef DIRETOR_H
#define DIRETOR_H

#include "pessoa.h"

class Diretor:public Pessoa{

public:
Diretor(string n, int o);
void setobras(int o);
int getobras(){return obras;}

private:
int obras;


};



#endif