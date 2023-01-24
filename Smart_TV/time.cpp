#include "time.h"

Time::Time(string n,string v):APP(n,v){}
void Time::run()
{
  time_t curr_time;
curr_time = time(NULL);
tm *tm_local = localtime(&curr_time);
    
int hour = tm_local->tm_hour;
int minute = tm_local->tm_min;
int second = tm_local->tm_sec;

int day = tm_local -> tm_mday;
int month = tm_local -> tm_mon;
int year = tm_local -> tm_year;
  cout<<"------------"<<endl;
  cout <<"| "<< setfill('0') << setw(2) << hour << ":" <<
  setw(2) << minute << ":" << setw(2) << second <<" |"<< endl;
  cout<<"------------"<<endl;
  cout<<"--------------"<<endl;
  cout<<"| "<<setw(2)<<day<<"/"<<setw(2)<<month+1<<"/"<<year+1900<<" |"<<endl;
  cout<<"--------------"<<endl;
}