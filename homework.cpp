
#include <iostream>
using namespace std;
int main()
{
   int n; cin>>n;
         int i=0;
         while(i<n){
              int j=1;
               while(j<=(n-i)){
                    cout<<j<<" ";
                     j++;
               }
               // Second Pattern
                 int k=1;
               while(k<=i){ 
                     cout<<"* ";
                   k++;
               }
                int l=1;
              while(l<=i){ 
                      cout<<"- ";
                 l++;
               }
                  // third  Pattern
                int m=1,o=n-i;
               while(m<=(n-i)){
                    cout<<o<<" ";
                    o--;
                     m++;
               }
               
                i++;
                 cout<<endl;
         
         

      
  }
    return 0;
}
