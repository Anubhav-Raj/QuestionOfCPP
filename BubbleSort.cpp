//https://www.youtube.com/watch?v=o4bAoo_gFBU

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
           if(i<0){
               return 0;
           } else{
                cin>>arr[i];
           }
      }
       for (int j = 0; j < n-1; j++){
           int flag=0;
            for (int k = 0; k < n-1-j; k++){
                 if (arr[k]>arr[k+1]){
                     swap(arr[k],arr[k+1]);
                     flag=1;
                 }
                  
            }
            if(flag==0) {
                  break;
          }
            
       }
       cout<<"Shorted  Array is:[";
        for (int l = 0; l < n; l++){
             cout<<arr[l]<<" ";
        }
      cout<<"]";
        
       
      
}