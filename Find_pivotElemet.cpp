#include<iostream>
using namespace std;
 int pivot(int arr[],int size){
      int s=0,e=size-1;
        while(s<e){
             int mid= s+(e-s)/2;
             if(arr[mid]>=arr[0]){
                 s=mid+1;
             } else{
                 e=mid;
             }
        }
         return s;// or return e;
 }
 int main(){
      int arr[100];
       cout<<"Enter the Size of Element ";
       int size;
        cin>>size;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
      cout<<"Pivot Element at index :"<<pivot(arr,size);
 }