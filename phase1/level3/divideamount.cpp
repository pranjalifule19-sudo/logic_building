#include <iostream>
using namespace std;

int main() {
    
    int amount = 0;
    cout<<"enter an amount :";
    cin>> amount;

    if(amount%100 ==0 && amount%500 ==0 && amount%2000 == 0 ){

        cout<< "an amount is evenly divisible ";
    }else{
        cout<<"not divisible";
    }

    return 0;
}
//check if an amount is evenly divided in 2000 500 and 100 with currency notes.