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
class demo{
public:
    int x;
    demo(int x){
        this->x=x;
    }
    bool operator== (demo ref){ 
       if( x==ref.x) return true;
       else return false;
    }
    void print(){
        cout<<x<<endl;
    }
};
int main(){
    demo d1(10);
    demo d2(20);
    demo d3(10);
    demo d4(30);
    cout<<(d1==d3)<<endl;
    cout<<(d1==d2)<<endl;
}