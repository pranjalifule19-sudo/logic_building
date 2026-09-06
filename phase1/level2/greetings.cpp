#include <iostream>
using namespace std;

int main() {
    
    int hour = 0;
    cout<<"Enter a time :";
    cin>>hour;

    if(hour>6 && hour<12){
        cout<<"GOOD MORNING";
    }else if(hour>12 && hour<16){
        cout<< "GOOD AFTERNOON";
    }else if(hour > 16 && hour < 19){
        cout<< "GOOD EVENING";
    }else if(hour > 19 && hour< 5){
        cout<< "GOOD NIGHT";
    }

    

    return 0;
}