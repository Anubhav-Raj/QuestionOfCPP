#include <iostream>
using namespace std;
//using two pointer apporch
  void reverseString(string& s,int i,int j){

          if(i>j){
               return;
          }
        swap(s[i],s[j]);
         i++;j--;
         reverseString(s,i,j);
        
  }


  // single pointer apporch
    void reverseString(string& s,int i){
       int n= s.length();
       // base case
        if(i>n/2){
           return;
        }
         swap(s[i],s[n-i-1]);
          i++;
          //Recurvise Call
          reverseString(s,i);
           

    }
int main()
{
    string s = "anubhav";
     int n=s.length();
     //reverseString(s,0,n-1);
     reverseString(s,0);
      cout<<s<<" ";
}