#include<iostream>
 using namespace std;
  bool linerSearch(int arr[], int size, int key){
    if(size==0){
         return false;
    } 
     if( arr[0]==key){
        return  true;
    } 
    linerSearch( arr+1,  size-1, key);
         
}
        
  
  int main(){
     int arr[]={1,2,5,4,7};
       int key;
        cout<<"Enter the key: "<<endl;
       cin>>key;
    if(linerSearch(arr,5,key)){
         cout<<"Key  are Present "<<endl;
    } else{
         cout<<"Key are not Present"<<endl;
    }
      
  }