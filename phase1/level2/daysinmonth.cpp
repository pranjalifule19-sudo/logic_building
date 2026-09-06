#include <iostream>
using namespace std;

int main() {
    int month = 0;

    cout<<"Enter a number of month :";
    cin>>month;

    if(month == 2){
        cout<< "number of days are 28";
    }else if(month%2==0){
        cout<< "number of days are 30";
    }else if(month > 12){
        cout<< "invalid month";
    }
    else{
        cout<< "Number of days are 31";
    }

    return 0;
}