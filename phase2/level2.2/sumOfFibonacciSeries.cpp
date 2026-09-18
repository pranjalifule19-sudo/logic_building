#include <iostream>
using namespace std;

int fib(int n){

    if(n <= 1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}
int main() {

    int num;
    cout<<"Enter a number : ";
    cin>>num;
   
    int sum =0;
    
    for(int i = 0;i<=num;i++){
        cout<<fib(i)<<" ";
    }
    
    return 0;
}
//print the sum of fist n terms of fibonacci series