#ifndef SERIE_H
#define SERIE_H

#include "producao.h"

class Serie:public Producao{

public:
Serie(string n,int c);

virtual void printProdu();

private:
int capitulos;

};


#endif