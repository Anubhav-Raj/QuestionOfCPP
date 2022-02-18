#include<bits/stdc++.h>
using namespace std;
class Solution
{
      private:
     void Permutations(string nums,vector<string>& ans, int index){
         // base case
             if(index>=nums.size()){
                  ans.push_back(nums);
                  return;
             }
          for(int i=index;i<nums.size();i++){
               swap(nums[index],nums[i]);
               Permutations(nums,ans,index+1);
               //backtracking
                 swap(nums[index],nums[i]);
          }
     }

	public:
		vector<string>find_permutation(string S)
		{
		   
		  vector<string> ans;
          int index=0;
          Permutations(S,ans,index);
          sort(ans.begin(), ans.end());
          return ans;
		}
};

int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
 