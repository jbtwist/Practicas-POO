/* 
 * File:   Client.h
 * Author: alumno
 *
 * Created on 26 de marzo de 2015, 9:04
 */

#ifndef CLIENT_H
#define	CLIENT_H
#include <string>
using namespace std;
/*Define and implement the Client class​with the following attributes and methods:
a. Attribute address of string type
b. Constructors with parameters, copy constructor and destructor
c. Getters and setters
*/

class Client{
private:    
    string address;
    
public:
Client();
Client(string address);
Client (const Client &orig);
~Client();
    
void setAddress(string newAddress);
string getAddress();
};


#endif	/* CLIENT_H */

