#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter 2 numbers : ";
    cin>>num1>>num2;

    int sum =num1+num2;
    if((num1 > 0 && num2 >0)&&(sum < 100)){
        cout<<num1<<" and " <<num2 <<" are positive numbers and their sum "<<sum <<" is less than 100";
    }
    else if((num1 <0 && num2 <0) && (sum <100))
    {

        cout<<num1<<" and " <<num2 <<" are negative numbers and their sum "<<sum <<" is less than 100";
    }
    else {
        cout<<"Not positive integers";
    }
   

    return 0;
}
//take 2 numbers and check if both are positive and there sum is less than 100.