#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout<<"Enter a number: ";
    cin>>num;

    if(num == 0){
        cout<<"zero";
    }
    
    else if(num == 1){
        cout<<"one";
    }
    
    else if(num == 2){
        cout<<"TWO";
    }
    
    else if(num ==3 ){
        cout<<"THREE";
    }
    
    else if(num ==4 ){
        cout<<"FOUR";
    }
    
    else if(num ==5 ){
        cout<<"FIVE";
    }
    
    else if(num ==6 ){
        cout<<"SIX";
    }
    
    else if(num ==7 ){
        cout<<"SEVEN";
    }
    
    else if(num ==8 ){
        cout<<"EIGHT";
    }
    
    else if(num ==9 ){
        cout<<"NINE";
    }
    else{
        cout<<"INVALID";
    }
    
    

    return 0;
}
//take a number from 0 to 9 and print its word for ("zero"to "nine")