// find maximum and mimumam number in array;
#include<iostream>
#include<climits>
using namespace std;
 int main()
 {
      int n;
      cout<<"Enter the size of array: ";
      cin>>n;
       int arr[n];
      cout<<"Enter the element  of Array: ";
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
      }
       int maxNo=INT8_MIN, minNo=INT8_MAX;
        for (int i = 0; i < n; i++)
        {

       /* if(max < arr[i]){
            max= arr[i];
        }
         if(min >arr[i]){
             min= arr[i];
         }*/
         
         maxNo= max(maxNo,arr[i]);// max function is used to  comapre   maximum number;
         minNo= min(minNo,arr[i]);// min function is used to compare mininium number;
        }
        cout<<"Maximum number is: "<<maxNo<<endl;
        cout<<"Mininum number is: "<<minNo<<endl;
        
 
      
 }