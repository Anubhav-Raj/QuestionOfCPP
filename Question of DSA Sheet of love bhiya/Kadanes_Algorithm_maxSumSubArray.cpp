#include <bits/stdc++.h>
using namespace std;
  int maxSumArray2(int arr[],int n){
//Kandenes_Algorithm
  int cur_sum=0;
          int max_sum=INT_MIN;
           for(int i=0;i<n;i++){
                  cur_sum+=arr[i];
                   if(cur_sum>max_sum){
                        max_sum=cur_sum;
                   } 
                    if(cur_sum<0){
                         cur_sum=0;
                    }
           }
            return max_sum;

            // Time Complicity is O(n);
            // Space Complicity is O(1);

  }
 int  maxSumSubArray(int arr[],int n){
   //Brute force approach II : Using 2 nested loops
      
 }
 int  main(){
 int arr[1000];
   int size;
    cin>>size;
     for (int i = 0; i <size; i++){
        
         cin>>arr[i];
     }
       cout<<"Sum of  SubArray is: "<<maxSumSubArray(arr,size);
     
 }