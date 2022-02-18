#include <bits/stdc++.h>
using namespace std;
 void allSubarry(int arr[], int size){
      int maxi=0;
 for ( int i = 0; i < size; i++)
         {
              for (int j = i; j < size; j++)
              {
                   cout<<"SubArray :"<<endl;
                    int sum=0;
                   for ( int k = i; k <=j; k++)
                   {
                        cout<<arr[k]<<" ";
                        sum+=arr[k];
                   }
                    maxi=max(maxi,sum);
                     cout<<endl;
                   
              }
              
         }
          cout<<"Maxmum sum Array :"<<maxi<<endl;
 }

 

int main(){
//Code Here
  int arr[1000];
    int size;
     cin>>size;
      for (int i = 0; i <size; i++){
         
          cin>>arr[i];
      }
        
         allSubarry(arr,size);

 return 0;
}