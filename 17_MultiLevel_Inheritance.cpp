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
class roll{
public:
    int rollNum;
    void get_roll(int rollNum){
        this->rollNum=rollNum;
    }
};
class subs:public roll{
public:
    int sub1;
    int sub2;
    void get_sub(int sub1,int sub2){
        this->sub1=sub1;
        this->sub2=sub2;
    }
};
class total : public subs{
public:
    void getRoll(int x){
        get_roll(x);
    }
    void getSubs(int x , int y){
        get_sub(x,y);
    }
   void print_total(){
    cout<<"Roll Number"<<rollNum;
    cout<<"total : "<<sub1+sub2<<endl;
   }
};
int main(){
     // RollNumber  -> Marks of Subjects -> Total marks
    total student;
    student.getRoll(55);
    student.getSubs(70,80);
    student.print_total();
}