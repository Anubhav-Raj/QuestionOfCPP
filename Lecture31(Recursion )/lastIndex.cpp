/*
roblem Description:
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
last index or -1

Constraints :
1 <= N <= 10^3

Sample Input :
4
9 8 10 8
8

Sample Output :
3

*/
#include <bits/stdc++.h>
using namespace std;
 int occasion(int arr[], int size, int key){
       if(size==0){
             return -1;
        }
           
             int ans= occasion(arr+1,size-1,key);
              cout<<ans<<" "<<endl;
              if(ans<0){
                   if(arr[0]==key){
                        return 0;
                   }
                   return ans;
              } else{
                   return ans+1;
              }

 }
 
  int lastIndex(int arr[],int size ,int k){
      
        // base case
         if(size==0){
               return -1;
         } 
          cout<<"."<<endl;
          if(arr[size]==k){
                return size;
          }
           lastIndex(arr,size-1,k);
            
  }
int main(){
//Code Here
 int arr[]={2,2,3,3,3};
 int key;
 //cin>>key;
 //cout<<"Last  occasion  of valur at "<<occasion(arr,5,2)<<endl;
  cout<<lastIndex(arr,4,3);
 return 0;
}