#ifndef ANGRYCAT_EXCEPTIOIN_H
#define ANGRYCAT_EXCEPTIOIN_H

#include <iostream>
#include <stdexcept>

using namespace std;

class AngryCatException: public runtime_error
{

public:
    AngryCatException(): runtime_error("Made cat angry!"){

    }
    AngryCatException(const string& message): runtime_error(message){
    }
};




#endif