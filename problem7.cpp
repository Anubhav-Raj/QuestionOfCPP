/* Write a Program to Check whether a year entered by
user is Leap Year or not */
#include<iostream>
using namespace std;
 int main(){
      int year;
       cin>>year;
        if(year%4==0){
             if(year%100==0){
                   if(year%400==0){
                   cout<<"year  are leep yaer";
                  } else{
                      cout<<"Not a Leep yaer";
                  }
             } else {
                   cout<<"year  are leep yaer";
             }

        } else{
             cout<<"Not a Leep yaer";
        }
      return 0;
 }
 /*
 If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
The year is a leap year (it has 366 days).
The year is not a leap year (it has 365 days).
*/