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
    void display(){
    cout<<"Base class is Called"<<endl;
    }
};

class Derived : public Base{
public:
    void display(){
    cout<<"Derived class is Called"<<endl;
    }
};

int main(){
    Derived demo;
    demo.display(); // prints its local display
    demo.Base::display(); // to print display of Base use Scope resoulrion operator
}