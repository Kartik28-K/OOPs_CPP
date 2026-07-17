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
private:
    int x;
    int y;
public:
    demo(int a , int b){
        x=a;
        y=b;
    }
    friend void sum(demo d1);
};
void sum(demo d1){
    cout<< d1.x + d1.y <<endl; // accesing x and y which are private members
}
int main(){
    demo d2(5,4);
    sum(d2);
}