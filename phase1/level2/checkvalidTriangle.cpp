#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout<<"Enter sides of a triangle:";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"valid Triangle";
    }else{
        cout<< "not valid";
    }

    return 0;
}