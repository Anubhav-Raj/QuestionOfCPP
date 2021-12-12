#include<iostream>
using namespace std;
 int main()
 {
      char a;
      cin>>a;
       int isLowercaseVowel,isuppercaseVowel;
       isLowercaseVowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
       isuppercaseVowel=(a=='A'||a=='I'||a=='E'||a=='O'||a=='U');
       cout<<isLowercaseVowel;
       
       if(isuppercaseVowel||isLowercaseVowel)
       {
         cout<<a<<" is a vowel";
       }else{
         cout<<a<<" is constant";
       }
         return 0;
          }