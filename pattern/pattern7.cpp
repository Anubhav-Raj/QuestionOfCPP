/*Enter  N :6

 *                                * 
 *  *                          *  * 
 *  *  *                    *  *  * 
 *  *  *  *              *  *  *  * 
 *  *  *  *  *        *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  *  *  * 
 */

#include<iostream>
using namespace  std;
 int main()
 {
      int n;
       cout<<"Enter  N :";
       cin>>n;
       
         for (int i = 1; i <=n; i++)
         {
              for (int j = 1; j<= i; j++)
              {
                  cout<<" * ";
                  
              }
               int space= 2*n -2*i;
               for (int  k= 1; k <=space; k++)
               {
                   cout<<"   ";
               }


                for (int j = 1; j<= i; j++)
              {
                  cout<<" * ";
                  
              }
               
               cout<<endl;
         }
         
 }