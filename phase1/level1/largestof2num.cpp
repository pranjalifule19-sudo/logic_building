#include <iostream>
using namespace std;

int main() {
    
    int num1 = 0;
    int num2 = 0;
    cout<<"Enter two number";
    cin>>num1 >> num2;
    if(num1>num2){
        cout<< num1 <<" is largest number";
    }else{
        cout<< num2<<" is a largest number";
    }

    return 0;
}