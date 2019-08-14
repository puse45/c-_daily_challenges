#include <iostream>
#include "Animal.h"

void Print(Animal& a){
    std::cout<< "Animal name is "<<a.getName()<<std::endl;
    std::cout<< "Animal number of legs "<<a.getNumberOfLegs(4)<<std::endl;
}

template <typename T>
T add(T val, T val2){
    return val + val2;
}

template <typename T>
T Max(T val, T val2){
    return (val < val2) ? val2 : val;
}

template <typename T, typename U>
class Person{
public:
    T height;
    U weight;
    static int numOfPeople;
    Person(T h, U w){
        height = h , weight = w;
        numOfPeople ++;
    }
    void GetData(){
        std::cout<<"Height: " << height <<std::endl;
        std::cout<<"Weight: " << weight <<std::endl;
    }
};
template <typename T, typename  U> int Person<T,U>::numOfPeople;



int main()
{
    /*
    // Template Class
    Person<double,int> mikeTyson(156,92);
    mikeTyson.GetData();
    std::cout<<"Number of people : "<< mikeTyson.numOfPeople<<std::endl;
     */

    /*
    // Templete Function
    std::cout<< add(4, 4) <<std::endl;
    std::cout<< Max(5, 4) <<std::endl;
     */


    /*
    // Class instantiation using stack method
    Animal animal;
    Print(animal);
     */



    return 0;
}