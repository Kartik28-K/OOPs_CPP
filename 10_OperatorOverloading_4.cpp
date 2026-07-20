// overloading Addition of complex numbers
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
class complex{
public:
    int real;
    int imag;
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    complex operator+ (complex ref){ 
       complex temp(real + ref.real , imag + ref.imag);
       return temp;
    }
    void print(){
        cout<<real<<"+(i"<<imag<<")"<<endl;
    }
};
int main(){
    complex c1(10,20);
    complex c2(20,40);
    complex c3=c1+c2;
    c3.print();
}