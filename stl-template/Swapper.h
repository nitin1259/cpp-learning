#ifndef SWAPPER_H
#define SWAPPER_H

#include <iostream>

using namespace std;

template<class T>
class Swapper
{
private:
    T first;
    T second;
public:
    Swapper(T first, T second);
    void swap();
    T getFirst()const;
    T getSecond()const;
   
};

template<class T>
Swapper<T>::Swapper(T first, T second)
{
    this->first=first;
    this->second=second;
}

template<class T>
void Swapper<T>::swap(){

    T temp = first;
    first = second;
    second = temp;

}

template<class T>
T Swapper<T>::getFirst()const{
    return this->first;
}

template<class T>
T Swapper<T>::getSecond()const{
    return this->second;
}


#endif