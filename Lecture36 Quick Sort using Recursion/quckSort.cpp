#include <iostream>
using namespace std;
 int partition(int arr[], int s, int e){
      int pivot=arr[e];
     int i=s-1;
        for (int j = s; j < e; j++){
              if(arr[j]< pivot){
                   i++;
                    swap(arr[i],arr[j]);
              }
        }
         i++;
         
        int temp= arr[i];
        arr[i]=pivot;
        arr[e]=temp;
        return i;//pivot Index
        
 }
 void qickSort(int arr[],int s,  int e){
         if(s<e){
               int pidx= partition(arr,s,e);
               qickSort(arr, s,pidx-1);
               qickSort(arr, pidx+1,e);
         }
 }
int main(){
//Code Here
    int arr[1000];
    int size;
     cin >> size;
     for (int i = 0; i < size; i++){
         cin >> arr[i];
     }
    

    qickSort(arr,0,4);

     cout<<"After  Sorting"<<endl;
    for (int i = 0; i < 5; i++){
        cout<< arr[i]<<" ";
    }
}
           
           