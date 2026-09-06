#include <iostream>
using namespace std;

int main() {
    
   int day = 0;
   cout<< "Enter a number of day :";
   cin>>day;

   if(day == 1){
    cout<<"sunday";
   }
   else if(day == 2){
    cout<< "Monday";
   }
   else if(day == 3){
    cout<< "tuesday";
   }
   else if(day == 4){
    cout<< "wednesday";
   }
   else if(day == 5){
    cout<< "thursday";
   }
   else if(day == 6){
    cout<< "friday";
   } else if(day == 7){
    cout<< "saturday";
   }
   else{
    cout<<"no day available";
   }
    return 0;
}