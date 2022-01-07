#include<iostream>
using namespace std;
 int main(){
     
      int row,col;
       cout<<"Enter the  value of row and col: ";
       cin>>row>>col;
    
       // creaton of 2D dynamic array
          int  **arr =new int*[row];
           for (int i = 0; i < row; i++){
               
                arr[i]=new int[col];
           }

           //take input from user
           cout<<"Enter the Element in  array "<<endl;
            for (int i = 0; i < row; i++){
                 for (int j = 0; j < col; j++){
                      cin>>arr[i][j];
                 }
                 
            }
            //Print  output
            cout<<"Array is "<<endl; 
               for (int i = 0; i < row; i++){
                 for (int j = 0; j < col; j++){
                      cout<<arr[i][j]<<" ";
                 }
                  cout<<endl;
            }
            // we have to releasing memory from heep
              for (int i = 0; i < col; i++)
              {
                  delete[] arr[i];
              }
              //  releas memory  jo line no  10 pe allocate hui hai
               delete []arr;
              
            // how to create a 2D array dynamically
             // take
            
           
           
 }