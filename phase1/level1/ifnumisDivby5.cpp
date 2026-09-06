#include <iostream>
using namespace std;

int main() {
    int n=0;
    cout<<"Enter a number";
    cin>>n;
    if(n%5==0){
        cout<< n <<" is divisible by 5";
    }else{
        cout<<" not divisible";
    }
    return 0;
}