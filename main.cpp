/* 
 * File:   main.cpp
 * Author: juan
 *
 * Created on 2 de abril de 2015, 18:59
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Person.h"
//#include "Person.cpp"

using namespace std;

/*
 * 
 */
//Crear una función auxiliar que devuelva el ID de la persona de más edad y otra que
//devuelva el ID de la persona que lleva menos tiempo dada de alta.
int oldest (Person p[],int tam){ 
    
    int age_oldest = p[0].getage();
    int id_oldest = 0;
            for (int i = 0; i<tam; i++){
                if (age_oldest < p[i].getage())
                    age_oldest = p[i].getage();
                    id_oldest = p[i].getid();
            };
        return id_oldest;
        }


int main(int argc, char** argv) {
/*
    Person p1("Maria","Garcia",11111111, 25);
    Person p2("Pepe", "Mel", 26258301, 70);
    Person p3("Federico", "Prieto", 12345678, 15);
    
    Person vp[3] = {p1, p2, p3};
   */ 
    int tam= 0;
    string new_name, new_fname;
    int new_id, new_age;
        cout << "Introduce la cantidad de personas a crear: ";
        cin >> tam;
        Person vp[tam];
        for (int i = 0; i<tam; i++){
            cout << "Introduce un nombre de persona: ";
            cin >> new_name;
            cout << "Introduce su primer apellido: ";
            cin >> new_fname;
            cout << "Introduce su dni (sin letra):";
            cin >> new_id;
            cout << "Introduce su edad: ";
            cin >> new_age;
        vp[i].setname(new_name);
        vp[i].setfname(new_fname);
        vp[i].setid(new_id);
        vp[i].setage(new_age);
        }   


    cout << oldest (vp, tam);
    return 0;
}

