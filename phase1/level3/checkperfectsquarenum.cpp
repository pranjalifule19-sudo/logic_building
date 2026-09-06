#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "Enter a number :";
    cin>>num;
    
    bool found = false;

    for(int i = 1; i*i <= num;i++){

        if( i*i == num){
            
            found = true;
            break;
        }
    }
        if(found){
            cout<<num<<" is a perfect square root";
        }else{
            cout<<"not perfect square root";
        }
    

    return 0;
}
//check the number is perfect square number or not.