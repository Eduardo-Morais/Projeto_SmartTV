#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa{
public:
Pessoa(string n);
void setnome(string n);
string getnome(){return nome;}

protected:
string nome;

};





#endif