#include<iostream>
using  namespace std;
 /*void srarch(int size,int arr[][100],int key){
     // Burt Force Approch 
     for(int row=0;row<size;row++){
                for (int col  = 0; col < size; col++){
                 if(arr[row][col]== key){
                       cout<<"Found Sucessfully";
                 }
                }
                
           }
 }*/
// Approch 2
/*  void search(int size,int arr[][max], int key){ 
     int i=0;
      int j=size-1;
     while(i< size && j>=0) 
     {
            if(key==arr[i][j] ){
               cout<<"Found";
            } else if(key>arr[i][j]){
              i++;
            } else { 
              j--;
            }
     }
  }*/
 
  
 int main(){
       int arr[100][100];
         int size;
          cin>>size;
           for(int row=0;row<size;row++){
                for (int col  = 0; col < size; col++){
                   cin>>arr[row][col];
                }
                
           }
           
             int key;
             // cout<<"Enter the Key: ";
             cin>>key;
           //search(size,a, key);


           // Another approch
      int i=0;
      int j=size-1;
     while(i< size && j>=0) 
     {
            if(key==arr[i][j] ){
               cout<<"Found Sucessfully";
                break;
            } else if(key>arr[i][j]){
              i++;
            } else { 
              j--;
            }
     }
 }