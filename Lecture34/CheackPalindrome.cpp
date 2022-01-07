// orginal String  s="abba"== reverse String s="abba";
#include<iostream>
  using namespace std;
  //TWo pointer apporach
   bool cheackPalindrome(string s,int i, int j){
        //base case
         if(i>j){
              return true;
         }
          if(s[i]==s[j]){
              i++;j--;
               cheackPalindrome(s,i,j);
          } else{
               return false;
          }
            
   }
   // Single Pointer apporch
   bool cheackPalindrome(string s,int i){
        int n = s.size(); 
        //base case
         if(i>n/2){
              return true;
         }
          int j=s.size()-i-1;
          if(s[i]==s[j]){
            cheackPalindrome(s,i+1);
          } else{
               return false;
          }
            
   }
    int main(){
          string s="geeuug";
             bool   isit=cheackPalindrome(s,0);
          if(isit){
               cout<<"Yes"<<endl;
          } else{
              cout<<"No"<<endl;
          }
    }