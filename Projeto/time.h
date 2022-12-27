#ifndef TIME_H
#define TIME_H
#include "app.h"
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
#include <ctime>
using std::setfill; 
using std::setw;

class Time:public APP{
public:
Time(string n,string v);
virtual void run();

  
};



#endif