#ifndef APP_H
#define APP_H
#include <string>
using namespace std;

class APP{

public:
APP(string n,string v);
void setnome(string n);
void setversao(string v);
string getnome(){return nome;}
string getversao(){return versao;}

virtual void run()=0;


protected:
string nome;
string versao;
};


#endif