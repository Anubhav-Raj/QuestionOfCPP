// to chaek simple number is prime or not
/*#include<iostream>
using namespace std;
  int main()
  {
      int  num1;
      cout<<"Enter thr number";
      cin>> num1;
      int i;
        for(i=2; i<num1;i++)
        {
             if(num1%i==0)
             {
                 cout<<"non prime "<<endl;
                  break;
             } 

        }
        if(i==num1)
        {
         cout<<"prime number";
        }

        

  }*/

//To chaeck  prime  number between  the range

#include <iostream>
using namespace std;
int main()
{
     int j, i, num1, num2;
     cin >> num1 >> num2;

     for (i = num1; i <= num2; i++)
     {
          for (j = 2; j < i; j++)
          {
               if (i % j == 0)
               {
                    break;
               }
          }
          if (j == i)
          {
               cout << i << " ";
          }
     }
}