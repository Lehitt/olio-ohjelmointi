#include <iostream>
#include"italianchef.h"
using namespace std;

italianchef::italianchef(string Iname):chef(Iname){
    cout<<"Italian Chef "<<Iname<<" konstruktori"<<endl;
};
italianchef::~italianchef(){
    cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}
void italianchef::makePasta(){
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
string italianchef::getName(){
    return name;
}
