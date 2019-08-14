//
// Created by pinje on 8/14/19.
//

#include "Animal.h"

Animal::Animal(){};
Animal::Animal(const char *name){
    m_name = name;
};
Animal::~Animal(){};
std::string Animal::getName(){
    return m_name;
}

int Animal::getNumberOfLegs(const int& legs){
    return legs*m_number_of_legs;
}
