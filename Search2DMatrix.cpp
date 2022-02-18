#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         if(!matrix.size())// cheack matrix is empty or not
             return false;
        
         int m= matrix.size();// size of row
         int n=matrix[0].size();// size of col
         int low=0;
         int high=(n*m)-1;// give last position of element  matrix[1][1] so  give 11;
        
         while(low<=high){
              int mid= low+(high-low)/2;// find mid;
             int i= mid/n;// find i  through  mid
              int j= mid%n;// find j through mid
              if(matrix[i][j]==target){
                   return  true;
              } else if( matrix[i][j]<target){
                   low= mid+1;
              } else{
                   high=mid-1;
              }
         }

           return false;
    }
};
int main(){
//Code Here
    //    int k;
	//     cin>>k;
	//     vector<vector<int>> arr(N, vector<int> (N, 0));
	//     for(int i=0; i<k; i++){
	//         for(int j=0; j<k; j++)
	//         {
	//             cin>>arr[i][j];
	//         }
	//     }

 vector<vector<int>> arr
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

         int targate;
         cin>>targate;
	    Solution obj;
    	   if (obj.searchMatrix(arr, targate)){
                cout<<"Yes";
           } else{
                cout<<"No";
           }
    	cout<<endl;

 return 0;
}