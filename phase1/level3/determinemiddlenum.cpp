#include <iostream>
using namespace std;

int main() {
    
   int num;
   cout<< "Enter 3 digit numbers :";
   cin>>num;

   int a = num / 100;
   int b = (num / 10)%10;
   int c = num%10;

   if(b<a && b<c)
   {
    cout<<"middle number is smallest";
   }
   else if(b>a && b>c)
   {
    cout<< "middle number is largest";
   }
   else
   {
    cout<<"neither";
   }

    return 0;
}