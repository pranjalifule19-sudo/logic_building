#include <iostream>
using namespace std;

int main() {
    int temp;
    cout<< "enter tempreture :";
    cin>>temp;

    if(temp<10){
        cout<< "cold";
    }
    else if(temp>10 && temp<28){
        cout<< " Worm";
    }
    else{
        cout<< "Hot";
    }
    return 0;
}