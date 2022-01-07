/*Problem Description:
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk.

Print the steps required to move n disks from source rod to destination rod.
Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.
Input Format :
Integer n

Output Format :
Steps in different lines (in one line print source and destination rod name separated by space)

Constraints :
0 <= n <= 20

Sample Input 1 :
2

Sample Output 1 :
a b
a c
b c

Sample Input 2 :
3

Sample Output 2 :
a c
a b
c b
a c
b a
b c
a c

*/
//Solution 
#include<iostream>
using namespace std;
 void toh(int n, char a, char b, char c){

     if (n>=1){
    
         toh(n-1,a,c,b);
      cout<<" move "<<a <<" to "<<c<<endl;
      
      toh(n-1,b,a,c);
     }
     
      

} int main(){
        int n;
        char a='A',b='B',c='C'; 
         cout<<"Enter the number of  Disk:";
         cin>>n;
 
        toh(n,a,b,c);
 }
 
// watch this for batter understanding
https://upload.wikimedia.org/wikipedia/commons/6/60/Tower_of_Hanoi_4.gif
 
 
