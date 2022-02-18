/*
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

using recursion.
Input format :
Integer k

Output format :
Geometric sum

Constraints :
0 <= k <= 1000

Sample Input 1 :
3

Sample Output 1 :
1.875

Sample Input 2 :
4

Sample Output 2 :
1.93750
*/

#include <bits/stdc++.h>
using namespace std;
  double Gsum(int n){
       // base case
   if(n==0){
       return 1;
   }
    double sum = Gsum(n-1);
    double ans=1/(double) pow(2,n)+sum;
      return  ans;
 }
int main(){
//Code Here
  int n;
   cin>>n;
     cout<<"Geometric Sum  is: "<<Gsum(n)<<endl;

 return 0;
}