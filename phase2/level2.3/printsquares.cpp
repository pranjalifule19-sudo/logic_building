#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout<< "Enter a number: ";
    cin>>num;

    int square = 1;

    for(int i = 1;i<=num;i++){

        square = i*i;
        
        cout<<square<<endl;
    }

    return 0;
}
//print square of numbers from 1 to n