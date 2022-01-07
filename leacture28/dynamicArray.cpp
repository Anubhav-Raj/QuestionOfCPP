#include<iostream>
using namespace std;
 int  getsum(int *a, int n){
      int sum=0;
       for (int i = 0; i < n; i++)
       {
           sum +=a[i];
       }
        return sum;
       
 }
 int main (){
  /*   char ch ='a';
       cout<<sizeof(ch)<<endl;
       char *c=&ch;
       cout<<sizeof(c)<<endl;


         char* ptr= new char;
          cout<<sizeof(ptr)<<endl;
  // how to create  dynamic array
    int * arr= new int [5];
     // total  memony conusume
     //*arr is pointer take 8 byte (alllocate in stack)
     // new int[5]= 4*5= 20 byte(allocate in heep)
     // total= 20+8=28;
     //new int [5]; iss part se heep me ek array banagaye ga 5 size ka or base address return kr dega jo ham use *arr pointer me save kr lege or usse hi usse access kare ge
     // jo memory stack me allocate hoti usse static alloacation blote hai
     // jo memory heep  me allocate hoti usse dynamic alloacation blote hai
      */
       int n;
       cin>>n;
        //variable size array
         int* a= new int[n];

         //taking input
           for (int i = 0; i < n; i++)
           {
               cin>>a[i];
           }
            int ans= getsum(a,n);
             cout<<"sum is "<<ans<<endl;
            delete  arr[];// relese memory from heep
      

 }