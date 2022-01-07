#include<iostream>
 using namespace std;
  bool binarySearch(int arr[],int s, int e, int key){
       if(s>e){
           return false;
       }
        int mid= (s+e)/2;
        if(arr[mid]==key){    
             return true;
        }
       
        if(arr[mid]< key){
            binarySearch(arr,mid+1,e,key);
        } else{
            binarySearch(arr,s,mid-1,key);
        }
  }
  int main(){
        int arr[]={1,2,4,5,7};
       int key;
        cout<<"Enter the key: "<<endl;
       cin>>key;
    if(binarySearch(arr,0,4,key)){
         cout<<"Key  are Present "<<endl;
    } else{
         cout<<"Key are not Present"<<endl;
    }


  }




   int search(int *arr,int s, int e, int key){
       if(s>e){
           return -1;
       }
        int mid= (s+e)/2;
        if(arr[mid]==key){    
             return mid;
        }
       
        if(arr[mid]< key){
           return  search(arr,mid+1,e,key);
        } else{
          return   search(arr,s,mid-1,key);
        }
  }
int binarySearch(int *arr, int n, int key)
{
    
      int ans= search(arr,0,n-1,key);
     return ans;
 
}