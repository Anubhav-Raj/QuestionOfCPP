#include <bits/stdc++.h>
using namespace std;
class Solution {
     private:
       void solve(vector<int>& nums, int index, vector<int> output,  vector<vector<int>>& ans){
            if(index>=nums.size()){
                 ans.push_back(output);
                 return;
            }
            // include
            solve(nums,index+1,output,ans);
           //exclude
            int element= nums[index]
              output.push_back(element);
            solve(nums,index+1,output,ans);
             
       }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>> ans;
          vector<int>output;
           int index=0;
         solve(nums,index,output,ans);
        
         return ans;
    }
};
int main(){
//Code Here
//power set: set of all sub set
  int arr[1000];
    int size;
     cin>>size;
      for (int i = 0; i <size; i++){
         
          cin>>arr[i];
      }  
 return 0;
}