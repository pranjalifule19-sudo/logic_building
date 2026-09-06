#include <iostream>
using namespace std;

int main() {
    
   float time = 0;
   cout<<"Enter time : ";
   cin>>time;

   if(time>=1 && time <= 11){
    cout<<"am";
   }
   else{
    cout<<"pm";
   }
    return 0;
}
//take 24 hours of time(hour and minute) and check wheather it is am or pm