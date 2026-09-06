#include <iostream>
using namespace std;

int main() {
    
    float angle1,angle2; 
     cout<< "Enter two angles :";
     cin>>angle1>>angle2;

     int triangle = 180;

     if(angle1 + angle2 < triangle){

        int angle3 =triangle - (angle1 +angle2);

        cout<< "3rd angle is 90 degree : " <<angle3;
     }else{
        cout<<"not a  triangle";
     }

    return 0;
}
//take 2 angle of a triangle and compute the third angle