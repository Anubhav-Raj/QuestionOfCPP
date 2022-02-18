
#include<bits/stdc++.h>

using namespace std;

class Solution{
public:	
// time Complicity is O(logN)
 int firstOccurrence(int arr[], int s, int e, int x, int n){
       
        
            if(e>=s){
                 int mid= (s+e)/2;
                  if((mid==0|| x> arr[mid-1] )&& arr[mid]==x){
                        return mid;
                  } else if(x>arr[mid]){
                    return   firstOccurrence(arr,(mid+1),e,x,n);
                  } else{
                      return  firstOccurrence(arr, s,(mid-1),x,n);
                  }
            }
             return -1;
     
 }
  int lastOccurrence(int arr[], int s, int e, int x, int n){
            if(e>=s){
                 int mid= (s+e)/2;
                  if((mid==n-1|| x< arr[mid+1] )&& arr[mid]==x){
                        return mid;
                  } else if(x<arr[mid]){
                      return lastOccurrence(arr,s,mid-1,x,n);
                  } else{
                     return lastOccurrence(arr, mid+1,n-1,x,n);
                  }
            }
           
         return -1;
     
 }

	int count(int arr[], int n, int x) {
	    // code here
	      int i;
	       int j;
	        
	        i= firstOccurrence(arr,0,n-1,x,n);
	         
	          if( i==-1){
	               return 0;
	          }
	           j= lastOccurrence(arr,i,n-1,x,n);
	        
	            return j-i+1;
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  