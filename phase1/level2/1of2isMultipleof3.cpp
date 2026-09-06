#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    if(a%c==0){
        cout<<a<<"is multiple of "<<c ;
    }else if(b%c == 0){
        cout<< b<<"is multiple of "<< c;
    }else{
        cout<< "not a multiple of any number";
    }
    
    return 0;
}