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
    // Multiple Catch stateMents Based on catch type
    int x=2;
    try{
        if(x==1){
            throw(x);
        }
        if(x==2){
            throw('s');
        }
        if(x==3){
            throw(5.5);
        }
    }
    catch(int b){
        cout<<"int catch block is called : "<<b<<endl;
    }
    catch(char b){
        cout<<"string catch block is called : "<<b<<endl;
    }
    catch(double b){
        cout<<"double catch block is called : "<<b<<endl;
    }

    //same code as above
    // Multipe try blocks for single catch statement
    try{
        if(x==1){
            throw(x);
        }
        if(x==2){
            throw('s');
        }
        if(x==3){
            throw(5.5);
        }
    }
    catch(...){
        cout<<"exception found"<<endl; // it will catch all types of exceptions irrespective of its types
    }
}