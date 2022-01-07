#include<iostream>
using namespace std;
int  main()
{
    int n,i;
    cout<<"Enter the size of arrry";
    cin>>n;
    int arr[n];
    cout<<"Enter the elememt of array";
     for (i = 0; i < n; i++){
       cin>>arr[i];
     }

       for (int j = 0; j < n-1; j++){ 
         int min=j;
        for (int k = j+1; k < n; k++){
             if(arr[k]< arr[min]){
               min=k;
             }
        }
            if(min != i){
              int temp=arr[j];
             arr[j]=arr[min];
             arr[min]=temp;
         }
       }
        for ( int l = 0; l < n; l++)
        {
          cout<<arr[l]<<" ";
        }
        
      
     
}