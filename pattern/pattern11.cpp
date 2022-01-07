/*
Enter the  number :7
       *  *  *  *  *  *  * 
      *  *  *  *  *  *  *  
     *  *  *  *  *  *  *   
    *  *  *  *  *  *  *    
   *  *  *  *  *  *  *     
  *  *  *  *  *  *  *      
 *  *  *  *  *  *  * 
 
*/
#include<iostream>
using namespace std;
 int main()
 {
         int  n;
        cout<<"Enter the  number :";
        cin>>n;
         for (int i = 1; i <= n; i++)
         {
                for (int k=1; k<= n-i; k++)
                   {
                       cout<<" ";
                   }
                 for (int p =1; p<=n; p++)
                   {
                       cout<<" * ";
                   }
             
               cout<<endl;
             
         }
         
       return 0;
}