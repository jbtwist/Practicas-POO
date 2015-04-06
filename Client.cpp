#include <string>
#include <iostream>
#include "Client.h"
using namespace std;

Client::Client(){}

Client::Client(string address){}

Client::~Client(){}

void Client::setAddress(string newAddress){
    address = newAddress;
}