#include "streaming.h"

ostream &operator<<(ostream &o,vector<Producao*> &p){
  o<<"-------| Catalogo de exibição |-------"<<endl;
  for(int i=0;i<p.size();i++){
    o<<"-------> "<<p[i]->getnome()<<endl;
  }
  return o;
}

const Streaming &Streaming::operator<<(Producao *p){
  list_p.push_back(p);
  return *this;
}

void Streaming::run(){
  string e;
  cout<<list_p<<endl;
  cout<<"-----------------------------------"<<endl;
  cout<<"| escolha uma opção para assistir |"<<endl;
  cout<<"-----------------------------------"<<endl;
  cin>>e;
  for(int x=0;x <list_p.size();x++){
    if(e==list_p[x]->getnome()){
      list_p[x]->printProdu();
    }
  }
  
  
}
Streaming &Streaming::operator>>(string s){
  for(int i = 0; i < list_p.size(); i++){
        if (s== list_p[i]->getnome()) {
            list_p.erase(list_p.begin() + i);
        }
    }
  return *this;
}