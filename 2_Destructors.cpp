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
    static int count;
    demo(){
        cout<<"Constructor is Called:"<<endl;
        count++;
    }
    ~demo(){
        cout<<"Destructor is Called:"<<endl;
        count--;
    }
    void print(){
        cout<<count<<endl;
    }
};
int demo::count = 0;
int main(){
    demo d1;
    d1.print();
    demo d2;
    d2.print();
}