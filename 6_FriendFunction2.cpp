// Friend Function in Two Classes
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

//A forward declaration tells the compiler that a class, function, or struct exists, without providing its full definition yet.
class demo2; // in line number 25 we wrote friend void larger(demo1 d1 , demo2 d2) here demo2 is not existing yet

class demo1{
private:
    int num1;
public:
    demo1(int x){
        num1=x;
    }
    friend void larger(demo1 d1 , demo2 d2);
};

class demo2{
private:
    int num2;
public:
    demo2(int y){
        num2=y;
    }
    friend void larger(demo1 d1 , demo2 d2);
};

void larger(demo1 d1 , demo2 d2){
    if(d1.num1 > d2.num2) cout<<"Demo1's Data member is Greater"<<endl;
    else cout<<"Demo2's Data member is Greater"<<endl;
}
int main(){
    // find out which number is larger one is private member of a class and second number is 
    // private member of another class
    demo1 d1(5);
    demo2 d2(4);
    larger(d1,d2);

    demo1 d3(10);
    demo2 d4(100);
    larger(d3,d4);
}