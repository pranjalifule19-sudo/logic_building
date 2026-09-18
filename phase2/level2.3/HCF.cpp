#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int reminder = 0;
    
    while(b!=0){

        reminder = a%b;
        a=b;
        b = reminder;
    }
        
    cout<< a;


    return 0;
}
//find the highest common factor of the number

