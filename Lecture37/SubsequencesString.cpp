#include <iostream>
 #include<string.h>
 #include<vector>
using namespace std;
 void solve(string str, int i, string output , vector<string>& ans){
      if(i>=str.length()){
           if(output.length() > 0){
                 ans.push_back(output);
           }
            return;
      }
       // Explode
         solve(str,i+1,output,ans);
     // Include
         char s=str[i];
     output.push_back(s);
     solve(str,i+1,output,ans);
 }
vector<string> subsequences(string str){
	
	// Write your code here
     vector<string> ans;
       string output="";
      int i=0;
       solve(str,i,output,ans);
         return ans;
	
}

int main(){
//Code Here
    string str="abc";
     vector<string> ans=subsequences(str);
      for (int i = 0; i < ans.size(); i++){
           cout<<ans[i]<<" ";
      }
      
       
 return 0;
}