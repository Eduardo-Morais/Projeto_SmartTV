#include "filme.h"

Filme::Filme(string n,string d):Producao(n){
  duracao=d;
}
void Filme::printProdu(){
  cout<<"-----------------------------------"<<endl;
  cout<<"Titulo original: "<<nome<<endl;
  cout<<"Duração do Filme: "<<duracao<<endl;
  
  cout<<"-----------------------"<<endl;
  cout<<"|  Diretores do Filme |"<<endl;
  cout<<"-----------------------"<<endl;
  for(int i=0;i<list_d.size();i++){
    cout<<list_d[i].getnome();
    cout<<" ele(a) ja dirigiu cerca "<<list_d[i].getobras()<<" filmes"<<endl;
  }
  cout<<"---------------------"<<endl;
  cout<<"|       ELENCO      |"<<endl;
  cout<<"---------------------"<<endl;
  for(int i=0;i<list_a.size();i++){
    cout<<list_a[i].getnome();
    cout<<" ele(a) atua a "<<list_a[i].gettemp()<<endl;
  }
  cout<<"-----------------------------------"<<endl;
}