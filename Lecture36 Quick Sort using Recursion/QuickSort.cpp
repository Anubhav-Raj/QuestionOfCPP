#include <iostream>
using namespace std;
 int partition(int arr[],int s, int e){
      int pivot=arr[s];
      int count=0;
      for(int i=s+1;i<=e;i++){
           if(arr[i]<=pivot)
               count++;
      }
      // place pivot at right Position 
      int pivot_index=s+count;
      swap(arr[pivot_index],arr[s]);
      //  left part where  element < pivot
     int i=s;
     int j= e;

      while(i<pivot_index && j > pivot_index){
     while (arr[i]<=pivot){
        i++;
     } while (arr[j]>pivot){
        j--;
     }
      if(i<pivot_index && j>pivot_index){
          swap(arr[i],arr[j]);
          i++;j--;
      }
     
   }
    return pivot_index;
     
    
 }

void quick(int arr[], int s, int e){
       // base case 
        if(s>=e)
             return;
       //partation karege 
        int right_index= partition(arr,s,e);

       //Recurcive Call

       //right part sort 
        quick(arr,right_index+1,e);
        // left part Sort
        quick(arr,s,right_index-1);
   }
int main(){

    int arr[1000];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    quick(arr,0,size-1);

     //cout<<"After  Sorting"<<endl;
    for (int i = 0; i < size; i++){
        cout<< arr[i]<<" ";
    }
}