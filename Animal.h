//
// Created by pinje on 8/14/19.
//

#ifndef PRACTO_ANIMAL_H
#define PRACTO_ANIMAL_H

#include <iostream>

class Animal{
private:
    std::string m_name = "Dog";
    int m_number_of_legs = 2;
public:
    Animal();
    Animal(const char *name);
    ~Animal();
    std::string getName();
    int getNumberOfLegs(const int& legs);
};

#endif //PRACTO_ANIMAL_H
