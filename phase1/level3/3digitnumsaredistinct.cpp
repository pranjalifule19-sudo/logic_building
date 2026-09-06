#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enetr 3 digit numbers:";
    cin>>num ;

    int a = num/100; //hundred place digit
    int b = (num/10)%10;    //for tens place digit 
    int c = num%10;     //for unit place
    if(a != b && a!=c && b!= c)
    {
        cout<<num <<" are distinct numbers";

    }else{
        cout<<num<<" are not distinct numbers";
    }
    return 0;
}