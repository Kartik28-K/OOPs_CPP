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
protected:
    int x;
public:
    void input(){
        cout<<"( From A )enter value of x : ";
        cin>>x;
    }
};
class B{
public:
    int y;
    void get_data(){
        cout<<"( From B )enter value of y : ";
        cin>>y;
    }
};
class C : public A, public B{
public:
    void get_x(){
        input();
    }
    void get_y(){
        get_data();
    }
    void print_sum(){
        cout<<"sum is : "<<x+y;
    }
};
int main(){
    C obj;
    obj.get_x();
    obj.get_y();
    obj.print_sum();
}