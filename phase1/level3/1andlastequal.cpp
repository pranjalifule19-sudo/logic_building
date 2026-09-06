#include <iostream>
using namespace std;

int main() {
    
   int num;

   cout<<"enter 4 digit number: ";
   cin>>num;

   int first = num/1000;
   int last = num%10;


   if(first == last){
    cout<< "numbers are equal";
   }else{
    cout<< "not equal";
   }

    return 0;
}