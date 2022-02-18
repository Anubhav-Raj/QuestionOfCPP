#include<iostream>
using namespace std;
 int removeDuplicate(int arr[],int size){
      int temp[size];
       temp[0]=arr[0];// first element or arr alway present in temp ... 
       int result=1;
         for(int i=1;i<size;i++){
             if(temp[result-1]!=arr[i]){
                 temp[result]=arr[i];
                 result++;
             }
         }
          return result;


           // time  complicity is O(n)
           // space  complicity is O(n)
 }


// Efficent Approch
 int removeDuplicate(int arr, int size){
    int result=1;
     for(int i=1;i<size;i++){
        if(arr[i]!=arr[result-1]){
        arr[result]=arr[i];
         result++;
        }
     }
      return result;
 }



 //
  void print(int arr[],int size){
       for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
  }
 int main(){
       int arr[100];
         //cout<<"Enter the size of array: ";
          int size;
         cin>>size;
          //cout<<"Enter the sorted element:  ";
            for(int i=0;i<size;i++){
                cin>>arr[i];
            }
          int newsize=  removeDuplicate(arr,size);
           print(arr,newsize);
 }
//  42 30
// 335 501 170 725 479 359 963 465 706 146 282 828 962 492 996 943 828 437 392 605 903 154 293 383 422 717 719 896 448 727 772 539 870 913 668 300 36 895 704 812 323 334