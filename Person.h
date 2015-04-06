#include <iostream>
#include <string>
#include "Date.h"
using namespace std;


    class Person{
    
    private:      
        static int ai;
        int pai;
        string name;
        string fname;
        string sfname;
        int id;
        char idc;
        int age;
        int telephone;
        string mail;
        Date* birthday;
        Date* signup;
        Date* signdown;
        
    public:
        Person();
        Person(string new_name, string new_fname, int new_id);
        Person(string new_name, string new_fname, int new_id, int age);
        Person(const Person &orig);
        ~Person();
        
        string getname();
        void setname( string new_name ); 
           
        string getfname();
        void setfname( string new_fname );
        
        string getsfname();
        void setsfname(string new_sfname);
        
        int getid();
        void setid(int new_id);
        
        char getidc();
        
        void setage(int new_age);
        int getage();
        
        void settelephone( int new_telephone);
        int gettelephone();
        
        void setmail(string new_mail);
        string getmail();
        
        //void read(Person &p);
        
        /*
        bool compareperson (int ID, int otherID);*/
    };

    

