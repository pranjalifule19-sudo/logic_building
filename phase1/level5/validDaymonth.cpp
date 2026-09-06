#include <iostream>
using namespace std;

int main() {

    int day,month;
    cout<<"Enter day and month : ";
    cin>>day>>month;

    if((month == 1|| month == 3|| month == 5 || 
        month == 7|| month == 8|| month == 10||
         month == 12)&&(day<=31&& day>=1)){
            cout<<"valid calender date";
         }
         else if((month == 4|| month == 6|| month == 9 || 
        month == 11)&&(day<=30&&day>=1)){

            cout<<"valid calender date";
        }else if((month==2)&&(day>=1&&day<=28)){
            cout<<"valid calender date";
        }
        else{
            cout<<"Not a valid calender date";
        }
    return 0;
}
//take day and month and check if it form valid calender date (ignore leap year)