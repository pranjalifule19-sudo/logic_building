#include <iostream>
using namespace std;

int main() {
    
   int num;
    cout<< "Enter a number: ";
    cin>>num;

    int cube = 1;

    for(int i = 1;i<=num;i++){

        cube = i*i*i;
        
        cout<<cube<<endl;
    }

    return 0;
}
//print cube of the numbers from 1 to n