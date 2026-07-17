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
    int y;
public:
    int x;
    demo(int x,int num){
        y=num;
        this->x=x;
    }
    void display_x(){
        cout<<x<<endl;
    }
    void display_y(){
        cout<<y<<endl; /// Accessing private member variable y using public member function display_y()
    }
};
int main(){
    demo d1(4,5);
    d1.display_x();
    d1.display_y();
    return 0;
}