#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}

class Solution
{
    public:
    //Function to merge k sorted arrays.
    //Naive Approach ->Time Complexity :O(n*k*log(n*k)). Space Complexity :O(n*k), 
    vector<int> mergeKArrays(vector<vector<int>> arr, int K){
   
        vector<int> sotedArray;
        for(int i = 0; i <K; ++i){
        for (int r = 0; r <K; ++r){
            sotedArray.push_back(arr[i][r]); 
            }
        }
        sort(sotedArray.begin(), sotedArray.end()); 
        return sotedArray;
    }
    //Efficient Approach 

};

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(N, vector<int> (N, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}
