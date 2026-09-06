#include <iostream>
using namespace std;

int main() {
    
   int even,odd;
   cout<<"Enter two numbers :  ";
   cin>>even>>odd;

   if(even%2==0 && odd%2==0){
    cout<<" Both are even numbers";
   }
   else if(even%2==0 && odd%2 != 0)
   {
    cout<<even<< " is a even number and "<<odd << " is a odd number";
   }
   else if(even%2!=0 && odd%2== 0)
   {
    cout<<even<< " is a odd number and "<<odd << " is a even number";
   }
   else
   {
    cout<< "Both are Odd number";
   }

    return 0;
}