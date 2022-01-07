#include<iostream>
 using namespace std;
  void bubbleSort(int *arr, int n){
       // base Case
        if(n==0 || n==1)
         return;
          
        //Solve 1 round 
         for (int i = 0; i < n-1; i++)
         {
              if(arr[i]>arr[i+1]){
                     swap(arr[i],arr[i+1]);
              }
         }
          // Recurvise Call
             bubbleSort(arr,n-1);
         
  }
 int main()
 {
      int arr[5]={1,3,9,6,0};
       bubbleSort(arr,5);
         cout<<"Sorted Array "<<endl;
          for(int i=0;i<5;i++){
                cout<<arr[i]<<" ";
          }
 } 