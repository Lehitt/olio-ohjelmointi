#include <iostream>
#include"chef.h"
using namespace std;

chef::chef(string Cname){
    name=Cname;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}
chef::~chef(){
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
void chef::makeSalad(){
    cout<<"Chef "<<name<<" makes salad"<<endl;
}
void chef::makeSoup(){
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

