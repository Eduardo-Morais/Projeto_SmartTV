#ifndef STREAMING_H
#define STREAMING_H
#include "app.h"
#include "producao.h"
#include <vector>
#include <iostream>
using namespace std;

class Streaming:public APP{

friend ostream &operator<<(ostream &o,vector<Producao> &p);

public:

Streaming(string n,string v):APP(n,v){};
const Streaming &operator<<(Producao *p);
Streaming &operator>>(string x);
virtual void run();

protected:
string n;
vector<Producao*> list_p;
};
#endif