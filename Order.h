/* 
 * File:   Order.h
 * Author: alumno
 *
 * Created on 5 de marzo de 2015, 9:06
 */

#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"

#ifndef ORDER_H
#define	ORDER_H

enum status{
    received,
    in_preparation,
    sent,
    closed         
};

class Order {
private:
    static int counter;
    int order_id;
    Date date;
    status order_status;
    float shipping_cost;
    float price;
    Person *customer;

public: 
    
    
    Order (const Order& orig);
    Order ( status s, float c, float p );
    Order ();
    ~Order();
    
};


#endif	/* ORDER_H */

