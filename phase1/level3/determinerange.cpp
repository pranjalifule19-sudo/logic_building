#include <iostream>
using namespace std;

int main() {
    
    int num =0;
    cout<< "Enter a number ";
    cin>>num;
    if(num >= 100 && num<= 999){
        cout<<"number is lies in the range of 100 to 999";
    }
    else{
        cout<<"not lies in the range";
    }
    return 0;
}
//check if a number lies within the range [100,999].