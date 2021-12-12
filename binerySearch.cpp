#include<iostream>
using namespace std;
 int binarySearch(int arr[], int n, int key){
      int start =0;
      int End=n;
         while (start <= End)
         {
              int mid= (start+End)/2;
              if(arr[mid]== key)
              {
                  return mid;
              } else if(arr[mid] > key)
              {
                  End=mid-1;
              } else{
                  start=mid+1;
              }
         }
          return -1;
         
 }
int main()
{   int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter  the Element  of  array:";
     for (int i = 0; i <n; i++)
     {
      cin>>arr[i];
     } 
      int key;
      cout<<"Enter  the Key: ";
      cin>>key;
     cout<<binarySearch(arr,n,key);
}