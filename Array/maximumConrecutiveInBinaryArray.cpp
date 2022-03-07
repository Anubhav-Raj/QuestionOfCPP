#include <bits/stdc++.h>
using namespace std;
 int  conrecutive(int arr[], int n){
       int max_one=0;
        int count=0;
        for( int i=0;i<n;i++){
             if(arr[i]==0){
                  count=0;

             } else{
                  count++;
                  max_one= max(max_one,count);
                  
             }
            
        }
         return max_one;
 }
int main(){
//Code Here
   int arr[1000];
     int size;
      cin>>size;
       for (int i = 0; i <size; i++){
          
           cin>>arr[i];
       }
       int one= conrecutive(arr,size);
        cout<<one<<endl;

 return 0;
}