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
class demo{
public:
    static int x;
    int  y;
    demo(int y){
        this->y=y;
        x++;
    }
    void print(){
        cout<<y<<endl; 
    } 
    static void access(){
        // this function cannot access y , because static member function can only access static data member
        cout<<x<<endl;
    }
};
int demo :: x;
int main(){
    demo d1(5);
    d1.print();
    demo::access(); // accessed using className
    demo d2(4);
    d2.print();
    demo::access();
    demo d3(3);
    d3.print();
    demo::access();
    demo d4(2);
    d4.print();
    demo::access();
}