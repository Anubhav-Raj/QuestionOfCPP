// <#include <iostream>
// using namespace std;

// int main() {
//    int t;
//    cin>>t;
//    while(t--){
//      int num1,num2,num3;
//      cin>>num1>>num2>>num3;
//        if(num1>=num2 && num1>=num3)
//        {
//          if(num2>=num3)
//          {
//              cout<<num2;
//          } else{
//              cout<<num3;
//          }
//        } else if(num2>=num1 && num2 >=num3)
//        {
//            if(num1>=num3)
//            {
//                cout<<num1;
//            }else{
//                cout<<num3;
//            }
//        } else{
//             if(num1>=num2){
//                 cout<<num1;
//             } else{
//                 cout<<num2;
//             }
           
//        }
//  }
// }
// second apporch
#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
         int n;
          cin>>n;
         long int  arr[n];
      for(int i=0;i<n; i++){ 
          cin>>arr[i];
          
      }
          int max1=0,max2=0;
            for(int i=0; i<n; i++)
            {
                 if(arr[i]>max1 && arr[i]>max2)
                 {
                      max2=max1;
                      max1=arr[i];
                 }else if(arr[i]>max2){
                    max2=arr[i];
                 }
            }
             cout<<max2<<endl;
           
    
 }
  return 0;
}

