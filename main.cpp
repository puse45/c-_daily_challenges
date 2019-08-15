#include <iostream>
#include <iterator>
#include <vector>
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

    std::vector<int> num2={1,4,5,6};
    std::vector<int>::iterator itr;
    // for loop using iterator to get values from vector
    for(itr = num2.begin();itr< num2.end(); itr++){
        std::cout << "Vector items " << *itr<<std::endl;
    }
    // Advanced in vector using iterator
    std::vector<int>::iterator itr2 = num2.begin();
    advance(itr2,2);
    std::cout<< "Iterator advance " << *itr2 <<std::endl;

    // Next in previous iterator
    auto itr3 = next(itr2,1);
    std::cout<< "Iterator next "<<*itr3<<std::endl;

    // Prev function get the previous item from the iterator
    auto itr4 = prev(itr2, 1);
    std::cout<< "Iterator previous "<< *itr4 <<std::endl;


    // Insert value to existing vector using iterator
    std::vector<int> num3 = {2,3};
    auto itr5 = num2.begin();
    advance(itr5,1);
    copy(num3.begin(),num3.end(), inserter(num2,itr5));
    for(auto &i : num2){
        std::cout<<"Insert values to vector "<<i<<std::endl;
    }

    return 0;
}