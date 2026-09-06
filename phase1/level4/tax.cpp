#include <iostream>
using namespace std;

int main() {
    
    int age = 0;
    float income =0;
    cout<<"enter your age and income: ";
    cin>>age >> income;

    if(age>18 && income>500000){
        cout<<"you are elegible for tax";
    }
    else{
        cout<< " not elegible";
    }
    return 0;
}
//take age and income and check if elegible for tax