//Program to check if an alphabet is a vowel or a consonant.
#include<iostream>
 using namespace std;
 int main()
 {
     int side1,side2,side3;
     cin>>side1>>side2>>side3;
     if(side1==side2 && side2==side3)
     {
         cout<<"Tringle is Equatrila";
     }else if(side1==side2 or side2==side3 or side1==side3)
     {
                 cout<<"Tringle is isolatrd";
     }else
     {
 cout<<"Tringle is scaler";
     }
     return 0;
 }