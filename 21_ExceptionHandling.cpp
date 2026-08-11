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
int main(){
    int a=100 ; int b=0 ; int c;
    try{
        if(b!=0){
            c=a/b;
            cout<<"c="<<c<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"divide by zero is not allowed b here is zero"<<endl;
    }
}