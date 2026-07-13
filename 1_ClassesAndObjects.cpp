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
class car{
    public:
    string name;
    int price;
    string brand;
    int car_id;
    bool sold;
    car(string name , int price , string brand , int car_id){
        this->name=name;
        this->price=price;
        this->brand=brand;
        this->car_id=car_id;
    }
    void print(){
        cout<<name<<" "<<price<<" "<<" "<<brand<<" "<<car_id;
        return;
    }
    void discount(int percent){
        int curr_price = price;
        curr_price =  price-((price*percent)/100);
        cout<<"Price after "<<percent<<" Discount is : "<<curr_price<<endl;
    } 
};
int main(){
    car car1("supra",10000,"Toyota",120);
    car car2("veyron",15000,"Bugatti",121);
    car car3("Gemera",13000,"koenigsegg",122);
    car car4("Urus",11000,"lamborghini",123);
    car car5("750s",16000,"McLaren",124);
    car2.discount(10);
}