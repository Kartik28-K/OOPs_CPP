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
    static int num;
    int x, y;
    demo(int x, int y){
        this->x=x;
        this->y=y;
        num++;
    }
    void print(){
        cout<<x<<" "<<y<<":"<<demo::num<<endl;  // as statc data member does not belong to any onject
    }
};
int demo :: num;
int main(){
    cout<<demo::num<<endl; // always inisialed with zero
    demo d1(5,4);
    d1.print();
    demo d2(3,2);
    d2.print();
    demo d3(1,0);
    d3.print();
    demo d4(-1,-2);
    d4.print();
    cout<<demo::num<<endl; // can be accessed outsied of the class and can be accessed anywhere in the program
    // use classname :: dataMember when accessing static Data Member
}