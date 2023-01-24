#include "serie.h"


Serie::Serie(string n,int c):Producao(n){
  capitulos =c;
}

void Serie::printProdu(){
  cout<<"-----------------------------------"<<endl;
  cout<<"Titulo original: "<<nome<<endl;
  cout<<"Duração da Serie: "<<capitulos<<" capitulos"<<endl;
  
  cout<<"-----------------------"<<endl;
  cout<<"|  Diretores da Serie |"<<endl;
  cout<<"-----------------------"<<endl;
  for(int i=0;i<list_d.size();i++){
    cout<<list_d[i].getnome();
    cout<<" ele(a) ja fez cerca de "<<list_d[i].getobras()<<endl;
  }
  cout<<"---------------------"<<endl;
  cout<<"|      ELENCO       |"<<endl;
  cout<<"---------------------"<<endl;
  for(int i=0;i<list_a.size();i++){
    cout<<list_a[i].getnome();
    cout<<" ele(a) atua a "<<list_a[i].gettemp()<<endl;
  }
  cout<<"-----------------------------------"<<endl;
}