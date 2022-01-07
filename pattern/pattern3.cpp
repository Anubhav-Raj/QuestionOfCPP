/*
Enter Number: 9
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  * 
 *  *  *  *
 *  *  *
 *  *
 *
Pattern 2
Enter Number: 5
 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/
#include<iostream>
using namespace std;
 int main()
 {
      int  n;
      cout<<"Enter Number: ";
      cin>>n;
         // pattern1
    //    for (int i = 1; i <= n; i++)
    //    {
    //       for (int j = i; j <= n; j++)
    //       {
    //           cout<<" * ";
    //       } 
    //        cout<<endl;
    //    }

     //method 2 for pattern 1
    for (int i = n; i >= 1; i--)
       {
          for (int j = 1; j <= i; j++)
          {
              cout<<" * ";
          } 
           cout<<endl;
       }

    //  // pattern 2
    //     for (int i = 1; i <= n; i++)
    //    {
    //       for (int j = 1; j <= i; j++)
    //       {
    //           cout<<" * ";
    //       } 
    //        cout<<endl;
    //    }
        return 0;
       
 }