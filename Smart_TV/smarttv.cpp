#include "smarttv.h"

SmartTV &operator<<(SmartTV &s,APP *a){
  
  s.aplicativos.push_back(a);
  return s;
}
SmartTV &operator>>(SmartTV &s,string x){
  for(int i = 0; i < s.aplicativos.size(); i++){
        if (x== s.aplicativos[i]->getnome()) {
            s.aplicativos.erase(s.aplicativos.begin() + i);
        }
    }
  return s;
}

SmartTV::SmartTV(string m,string mo,string s){
  marca=m;
  modelo=mo;
  so=s;
}
void SmartTV::printApps(){
  for(int i=0;i<aplicativos.size();i++){
    cout<<aplicativos[i]->getnome()<<endl;
  }
}
void SmartTV::run(string x){
  cout<<"-----------------------------------"<<endl;
  for(int i = 0; i < aplicativos.size(); i++){
        if (x== aplicativos[i]->getnome()){
            aplicativos[i]->run();
        }
  }
  cout<<"-----------------------------------"<<endl;
}

void SmartTV::ligar(){
  estado=true;
}
void SmartTV::desligar(){
  estado=false;
}