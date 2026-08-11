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
    int a;
    void input(){
        cout<<"Enter value of a : ";
        cin>>a;
    }
    void outA(){
        cout<<"value of a is : "<<a<<endl;
    }
};

class B{
public:
    int b;
    void input(){
        cout<<"Enter value of b : ";
        cin>>b;
    }
    void outB(){
        cout<<"value of a is : "<<b<<endl;
    }
};

class C : public A , public B{
public:
    int c;
    void input(){
        cout<<"Enter value of c : ";
        cin>>c;
        A::input();
        B::input();
    }
    void outC(){
        cout<<"value of c is : "<<c<<endl;
    }
    void outAll(){
        cout<<"called from c value of a is : "<<a<<endl;
        cout<<"called from c value of b is : "<<b<<endl;
        cout<<"called from c value of c is : "<<c<<endl;
    }
};
int main(){
    // A \
    //     C
    // B /
    // all A B C have same function input
    C demo;
    demo.input();
    demo.outA();
    demo.outB();
    demo.outC();
    demo.outAll();
}