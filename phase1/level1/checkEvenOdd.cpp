#include <iostream>
using namespace std;

int main() {
    int n =0;

    cout<<"enter a number";
    cin>>n;
    if(n%2 == 0){
        cout<< n<<" is even number";
    }
    else{
        cout<< n<< " is a odd number";
    }
    return 0;
}