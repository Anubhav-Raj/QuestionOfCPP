#include<iostream>
using namespace std;
 int main()
 {
      int n, rem,sum,orginal_num;
       cout<<"Enter the number";
       cin>>n;
       orginal_num=n;
        sum=0;
         while (n>0)
         {
              rem=n%10;
              sum= sum+rem*rem*rem;
              n=n/10;
         }
         if(orginal_num==sum)
         {
             cout<<"Armstong number";
         } else{
              cout<<"Not Armstong number";
         }
 }