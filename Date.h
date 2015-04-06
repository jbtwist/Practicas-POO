/* 
 * File:   Date.h
 * Author: Blanca
 *
 * Created on 24 de febrero de 2015, 15:02
 */

#ifndef DATE_H
#define	DATE_H

#include <iostream>

class Date {

private:
    static int ai;
    int day;
    int month;
    int year;
    int myID;

    
public:
    
    Date ();
    ~Date();
    
    int get_id();
    
    int getDay ();
    void setDay (int new_day);
    
    int getMonth ();
    void setMonth (int new_month);
    
    int getYear ();
    void setYear (int new_year);
    
    int yearMonthDate(int new_day, int new_month, int new_year);
    
    void kk () { std::cout << myID; }
    
    
};

#endif	/* DATE_H */

