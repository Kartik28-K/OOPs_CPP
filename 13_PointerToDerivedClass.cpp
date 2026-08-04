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
    int var_base;
    void display(){
        cout<<"Base is called : "<<var_base<<endl;
    }
};

class Derived : public Base{
public:
    int var_derived;
    void display(){
        cout<<"Base is called using derived : "<<var_base<<endl;
        cout<<"Derived Class is called : "<<var_derived<<endl;
    }
};
int main(){
    Base* base_class_pointer; // Pointer is Base class type
    Base base_obj;
    Derived derived_obj; // derived class object
    base_class_pointer = &derived_obj; // pointer of base class is used to store objects address of derived class 
    base_class_pointer->var_base = 140; // although the pointer is used to store derived class object's address but still it can't access the members of derived class it calls its own members 
    base_class_pointer->display(); // same reason as above point
    // base_class_pointer->var_derived = 500; this will give error

    Derived* derived_class_pointer;
    derived_class_pointer = &derived_obj;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
}