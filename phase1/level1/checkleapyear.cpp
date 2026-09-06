#include <iostream>
using namespace std;

int main() {
    int year = 0;
    cout<<"Enter a year";
    cin>>year;
    if(year%4==0 || (year%100!= 0 && year%400==0)){
        cout<<year<< " is a leap year";
    }else{
        cout<<"not a leap year";
    }
    

    return 0;
}