/*
Problem Statement: String to Integer
Problem Level: MEDIUM
Problem Description:
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
1231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567

*/

#include <bits/stdc++.h>
using namespace std;
  int integer(string str){
    
     // base case
      if(str.length()==1){
           return (str[0]-'0');
      }
        double a= integer(str.substr(1));

        
        double b=str[0]-'0';
        double x=b*pow(10,str.length()-1)+a;
        return int(x);
          
        
 }
int main(){
//Code Here
 string str="124";
    cout<<integer(str);
 return 0;
}