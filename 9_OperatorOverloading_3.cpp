// overloading Assignment and ShortHand Assignment operator
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
    void operator= (demo d2){ //Assignment Ooperator
       x=d2.x;
    }
    void operator+= (demo d2){ //shorthand Ooperator
       x=x+d2.x;
    }
    void print(){
        cout<<x<<endl;
    }
};
int main(){
    demo d2(10);
    demo d1=d2;
    d1.print();
}