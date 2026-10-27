#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

class Base{
public:
    int var_base=1;
    // case1
    // void display(){
    //     cout<<"1. Display from Base : "<<var_base<<endl;
    // }
    // case2
     virtual void display(){
        cout<<"1. Display from Base : "<<var_base<<endl;
    }
};

class Derived:public Base{
public:
    int var_derived=2;
    void display(){
        cout<<"2. Display from Derived : "<<var_base<<endl;
        cout<<"2. Display from Derived : "<<var_derived<<endl;
    }
};
int main(){
    Base* base_pointer;
    Derived der_obj;
    base_pointer= &der_obj;
    //base_pointer->display(); // prints display from base class in Case 1
    base_pointer->display(); // prints display from Derived class in Case 2 due to vitual function

    Base base_obj;
    base_pointer=&base_obj;
    base_pointer->display(); // printt display from Base class because base pointer has now Base class object

    // vrtual function will run according to the need
    // if base pointer has base class data it will display from Base
    // if base pointer has derived class data it will display from derived class

}
