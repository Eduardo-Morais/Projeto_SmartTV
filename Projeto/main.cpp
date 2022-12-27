//---------------------includes----------------------------

#include <iostream>
#include "pessoa.h"
#include "diretor.h"
#include "ator.h"
#include "producao.h"
#include "filme.h"
#include "serie.h"
#include "time.h"
#include "streaming.h"
#include "smarttv.h"

//-------------------------------------------------------

int main() {
  
  //----------------instancias----------------------------
  
  Ator a1("Eduardo","3 meses");
  Ator a2("Daniel Lima","2 anos");
  Ator a3("Lipe","5 anos");
  Ator a4("Alessandro","10 anos");
  Ator a5("Nicolas","3 anos");
  Ator a6("Demetrio","24 anos");
  Ator a7("Daniel Barbosa","1000 anos");
  Ator a8("Caio","24 anos");
  Ator a9("Aryel","8 anos");
  
  Diretor d1("Victor",5);
  Diretor d2("Livia",2);
  Diretor d3("Larissa",4);
  Diretor d4("Emilieny",6);
  
  Filme p1("Tristeza","1h30");
  Filme p2("Grafos","2h30");
  Serie s1("Exatas",20);
  Serie s2("Poo",19);
  Time t("Timer","1.0");
  Streaming netflix("Netflix","2.0.2.2");
  Streaming prime("Prime","2.0.0.2");

  Producao *t1=&s1;
  Producao *t2=&p1;
  Producao *t3=&s2;
  Producao *t4=&p2;
  
  APP *test4;
  APP *test5;
  APP *test6;
  test4=&netflix;
  test5=&t;
  test6=&prime;
  
  SmartTV TV("Samsung","2023","snapdragon806");
  
  //-----------------------filmes----------------------------
  
  p1.addAtor(a1);
  p1.addAtor(a2);
  p1.addAtor(a4);
  p1.addDiretor(d2);

  p2.addAtor(a1);
  p2.addAtor(a2);
  p2.addAtor(a3);
  p2.addAtor(a4);
  p2.addAtor(a6);
  p2.addAtor(a7);
  p2.addDiretor(d1);
  p1.addDiretor(d4);
  
  //-----------------------series----------------------------
  
  s1.addAtor(a3);
  s1.addAtor(a5);
  s1.addAtor(a6);
  s1.addAtor(a7);
  s1.addAtor(a8);
  s1.addDiretor(d1);
  s1.addDiretor(d3);

  s2.addAtor(a1);
  s2.addAtor(a2);
  s2.addAtor(a3);
  s2.addAtor(a4);
  s2.addAtor(a5);
  s2.addAtor(a6);
  s2.addAtor(a7);
  s2.addAtor(a8);
  s2.addAtor(a9);
  s2.addDiretor(d1);
  s2.addDiretor(d2);
  s2.addDiretor(d3);
  s2.addDiretor(d4);
  
  //---------------------------------------------------------
  netflix<<t1;
  netflix<<t2;
  prime<<t3;
  prime<<t4;
  TV<<test4;
  TV<<test5;
  TV<<test6;
  
  //---------------------------------------------------------
  
  while(TV.estado == true){
    int op;
    cout<<"------------------------"<<endl;
    cout<<"| escolha o que fazer: |"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| opção 1: Timer       |"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| opção 2: Netflix     |"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| opção 3: Prime       |"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"| opção 4: Desligar    |"<<endl;
    cout<<"------------------------"<<endl;
    cin>>op;
    //tentei fazer tratamento de exceção com try() e catch() porém tava dando erro então fiz normal;
    if(op==1){
      TV.run("Timer");
    }else if(op==2){
      TV.run("Netflix");
    }else if(op==3){
      TV.run("Prime");
    }else if(op==4){
      TV.desligar();
    }else{
      cout<<"---------------------------"<<endl;
      cout<<"| insira uma opção valida |"<<endl;
      cout<<"---------------------------"<<endl;
    }
  }
  return 0;
}
