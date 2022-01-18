#include<iostream>
 #include<vector>
using  namespace std;
 int countNegatives(vector<vector<int>>& grid) {
          int count = 0;
          int n= grid.size();// size of row
         int m=grid[0].size();// size of col
         
        int i=0;
         int j=m-1;
         while(i<n && j>=0){
               if(grid[i][j]<0){
                    count+=n-i;
                   j--;
               }  else{
                   i++;
               }
         }
         return count;
     
    }

 int main(){
  
    vector<vector<int>> vect
    {
        {4, 3, 2,-1},
        {3, 4, 1,-1},
        {1, 1, -1, -2},
        {-1,-1,-2,-3}
    };
      cout<<"Total Negative Element in  matrix:"<<countNegatives(vect);
 }