// overloading ++
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
    void operator++ (){ // this will handle pre increment ++x for x++ post increment void operator++ (int)
       x=x+1;
    }
    void print(){
        cout<<x<<endl;
    }
};
int main(){
    demo d1(10);
    ++d1;
    d1.print();
}