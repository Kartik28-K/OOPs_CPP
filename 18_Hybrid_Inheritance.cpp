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
class A{
public:
    void put_data(){
        cout<<"Inside Class A"<<endl;
    }
};
class B:public A{
public:
    void display(){
        cout<<"Inside Class B"<<endl;
    }
};

class C{
public:
    void message(){
        cout<<"Inside Class C"<<endl;
    }
};

class D:public C,public B{
public:
    void print(){
        cout<<"Inside Class D"<<endl;
    }
};

int main(){
     // A -> B \ 
    //          D
     //.     C /
    D demo;
    demo.put_data();
    demo.display();
    demo.message();
    demo.print();
}