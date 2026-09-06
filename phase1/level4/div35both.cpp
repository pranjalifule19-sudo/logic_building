#include <iostream>
using namespace std;

int main() {
    
   int num = 0;
   cout<<"Enter a number : ";
   cin>>num;

   if(num%3 == 0 && num%5!=0){
    cout<<"Fizzz";
   }else if(num%5 == 0 && num%3 != 0){
    cout<<"Buzzz";
   }else if( num%3 == 0 && num%5 == 0){
    cout<<"FizzBuzz";
   }
   else{
    cout<<"not divisible by any number";
   }

    return 0;
}
//take a digit and print fizzz if digit is
//divisible by 3 and buzzz if divisible by 5 print fizzBuzz if divisible by both.