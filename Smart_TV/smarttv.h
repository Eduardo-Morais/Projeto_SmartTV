#ifndef SMARTTV_H
#define SMARTTV_H
#include <string>
#include <vector>
#include "app.h"
#include "iostream"
using namespace std;


class SmartTV{

friend SmartTV &operator<<(SmartTV & ,APP *a);
friend SmartTV &operator>>(SmartTV &,string x);

public:

SmartTV(string m,string mo,string s);
void printApps();
void run(string x);
void ligar();
void desligar();

bool estado=true;

private:
string marca;
string modelo;
string so;
vector<APP*> aplicativos;

};


#endif