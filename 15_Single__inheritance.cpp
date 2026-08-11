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
protected:
    int x;
public:
    A(int x){
        this->x=x;
    }
    void print(){
        cout<<"Class A:"<<x<<endl;
    }
};
class B : public A{
public:
    int y;
    B(int y,int x):A(x){ // most important how to pass values to B as well as A
        this->y=y;
    }
    void print(){
        cout<<"Class B:"<<y<<endl;
        cout<<"Class B:"<<x<<endl;
    }
};
int main(){
    A obj1(10) ;
    obj1.print();
    B obj2(20,100);
    obj2.print();

}