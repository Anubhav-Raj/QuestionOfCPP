#include<iostream>
using  namespace std;
int main()
{
    int n;
     cout<<"Enter the size of number:";
     cin>>n;
      int arr[n];
      cout<<"Enter the Element of array : ";
      for (int i = 0; i < n; i++){
          cin>>arr[i];
      }
     for(int i=1;i<n;i++){
           int temp=arr[i];
           int j;
            for(j=i-1;j>=0;j--){
           if(arr[j]>temp){
                arr[j+1]=arr[j];
           } else{
               break;
           }
                
          }
           arr[j+1]=temp;
      }
       for (int i = 0; i < n; i++){
           cout<<arr[i]<<" ";
       }
       
}