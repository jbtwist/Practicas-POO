/* 
 * File:   Employee.h
 * Author: alumno
 *
 * Created on 26 de marzo de 2015, 9:29
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>
using namespace std;
/*
a. Attribute salary (>600)
b. Constructors with parameters, copy constructor and destructor
c. Getters and setters
*/

class Employee{
private:    
    int salary;
    
public:
    Employee();
    Employee(int salary);
    Employee(const Employee &orig);
    ~Employee();
};


#endif	/* EMPLOYEE_H */

