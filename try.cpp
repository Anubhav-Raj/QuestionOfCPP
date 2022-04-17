 #include <bits/stdc++.h>
 using namespace std;
  int main(){
 // code hear
     int arr[1000];
       int size;
        cin>>size;
         for( int i=0 ;i<size; i++)
         {
             cin>>arr[i];
         }
            
             sort(arr,arr+size);
              for( int i=0 ;i<size; i++)
         {
             //5 cout<<arr[i]<<" ";
         }
          
               for( int i=0;i<size;i++)
               {
                    if(arr[i]==arr[i+1])
                    {
                   
                    } else{
                        cout<<arr[i]<<" ";
                    }
               }
              return 0;
 }