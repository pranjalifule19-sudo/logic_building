#include <iostream>
using namespace std;

int main() {
    int n =0;
    cout<< "Enter a number";
    cin>> n;
    if(n%3==0 && n%5==0){
        cout<< n<< " is divisible by both 3 and 5";
    }else{
        cout<< "not divisible";
    }

    return 0;
}