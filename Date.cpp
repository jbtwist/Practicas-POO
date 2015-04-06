#include "Date.h"
#include <ctime>
#include <iostream>

using namespace std;

int Date::ai = 0;

Date::Date (){
  time_t currentTime;
  struct tm *localTime; 

  time( &currentTime );                  
  localTime = localtime( &currentTime );
  
   myID = ++ai;
   day = localTime->tm_mday;
   month = localTime->tm_mon;
   year = localTime->tm_year; 
}
Date::~Date() {}


int Date::get_id(){
    return myID;
}

int Date::getDay () {
    return day;
};

void Date::setDay (int new_day) {   
day = new_day;
};   
    
int Date::getMonth () {
    return month;
};
void Date::setMonth (int new_month){
    month = new_month;
};
    
int Date::getYear () {
    return year;
};
void Date::setYear (int new_year) {
    year = new_year;
};  

int Date::yearMonthDate(int new_day, int new_month, int new_year){
    int a =  (new_year*10000) +  (new_month * 100) + (new_day);
    return a;
}