#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int div = 1;
    for(int i = a;i<= b;i++){

        if(i%7==0){
            div = i;
            cout<< div<<endl;
        }
    }

    return 0;
}
//print all numbers divisible by 7 between a and b
