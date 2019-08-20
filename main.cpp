#include <iostream>
#include <iterator>
#include <vector>
#include "Animal.h"
#include "Player.h"
#include "str_player.h"

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

void increment(int& value){
    value++;
}



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

    /*
    // Iteration lib

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

    */

    /*
    // Const - key word promise given that nothing is going to change but can be broken

    // variable value can be changed
    int a = 5;
    a = 2;

    // variable value can't be changed by using const
    const int b =5;

    // can be used to set values permanent to variables

    const int max_age = 80;
     */


    /*

    // Ponters '*' (Memory Pointer) are integer numbers
    int var = 8;
    int *ptr = &var;
    *ptr = 4;
    // Dereference
    std::cout<< var<<std::endl;
    std::cout<< *ptr<<std::endl;



    // Reference '&' takes the memory address of the assigned variable
    int a =5;
    int& ref = a;
    ref = 10;
    std::cout << a <<std::endl;

    // Reference in function
    int c =13;
    increment(c);
    std::cout<< c <<std::endl;

    */

    /*
    // Instantiating Player Class
    // Default visibility private
    Player play;
    play.speed = 30;
    play.move(4,5);
     */

    /*
    // Instantiating strPlay Struct
    // Default visibility public
    str_Player strPlayer;
    strPlayer.speed = 40;
    strPlayer.move(5,6);
     */




    return 0;
}