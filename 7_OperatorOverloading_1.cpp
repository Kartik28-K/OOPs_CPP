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
    int x;
    demo(int x){
        this->x=x;
    }
    demo operator+ (demo d2){
        demo d3(x + d2.x); // only x is written because it is called by the object of refrence and second object is passed as paramter
        return d3;
    }
    void print(){
        cout<<x<<endl;
    }
};
int main(){
    demo d1(10);
    demo d2(120);
    demo d3 = d1+d2;
    d3.print();
}