// overloading Equality Operator
#include <iostream>
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
    int x;
    A(int x){
        this->x=x; // used in Constructor
    }
    void getData(){
        cout<<x<<endl;
    }
};
class B{
public:
    int y;
    void setData(int y){
        this->y=y; // used inside member function
    }
    B* getPointer(){
        return this; // as it is a pointer therefore it can be used to return a pointer to the current object
    }
    B getObject(){
        return *this; // dereference the pointer and returns a object;
    }
    void getData(){
        cout<<y<<endl;
    }
};
int main(){
    // This pointer is used to point to the current object in member function 
    // or this poniter is used to point to the object which invokes the member function
    A obj1(12);
    obj1.getData();
    B obj2;
    obj2.setData(14);
    obj2.getData();
    B* pointer = obj2.getPointer();
    cout<<pointer<<endl;
    cout<<pointer->y<<endl;
    cout<<obj2.getObject().y<<endl;
}