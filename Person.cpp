#include "Person.h"
#include <iostream>
#include <string>
 
using namespace std;
 
//Inicializamos contador de personas
int Person::ai=0;
 
/**@brief Constructor por defecto*/
Person::Person(string new_name, string new_fname, int new_id)
{
    ai++; //Incrementamos el contador global de personas
    cout << "Se está creando la persona "<<ai<<" "<<name<<endl;
    pai=ai;
    name=new_name;
    fname=new_fname;
    id=new_id;
    age=0;
}

Person::Person(string new_name, string new_fname, int new_id, int new_age)
{
    ai++; //Incrementamos el contador global de personas
    cout << "Se está creando la persona "<<ai<<" "<<name<<endl;
    pai=ai;
    name=new_name;
    fname=new_fname;
    id=new_id;
    age = new_age;
}
 
/**@brief Constructor de copia*/
Person::Person(const Person &orig)
        :pai(ai),name(orig.name),fname(orig.fname),id(orig.id)
        ,age(orig.age)
{
    ai++;//Una copia
    cout << "Se está copiando a "+orig.name+" con nuevo id "<< ai <<endl;
}
Person::Person(){}
Person::~Person(){}
 
void Person::setname(string new_name) {
    name=new_name;
}

string Person::getname(){
    return name;
}
 
void Person::setage(int age) {
    this->age = age;
}
 
int Person::getage() {
    return age;
}
 
void Person::setid(int id) {
    this->id = id;
}
 
int Person::getid() {
    return id;
}
 
char Person::getidc(){
    return idc;
}

void Person::setfname(string new_fname) {
    this->fname = fname;
}

string Person::getfname(){
    return fname;
}
 
string Person::getsfname(){
    return fname;
}
 
void Person::setsfname(string new_sfname){
    this->sfname = sfname;
}
