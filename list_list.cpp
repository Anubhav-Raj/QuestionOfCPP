#include <bits/stdc++.h> 
using namespace std; 

  
int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
int  max=0;
    for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
         if(maxElement==array[i]){
                 max++;
           }
    }
    
    return max;
 
}

int main() {
	// your code goes here
	  int t;
	    cin>>t;
	     while(t--){
	          int n;
	           cin>>n;
	         int  arr[n];
	          for (int i=0; i<n; i++) {	            
	              
	               cin>>arr[i];
	          }
	            int  frequency=getMaxRepeatingElement(arr,n);
	            
	            int operation=0;
	            // cout<<frequency<<" "<<n<<" "<<endl;
	             if(frequency>=2 && n!=1){
	                  operation= n-frequency+1;
	                    cout<<operation<<endl;
	             } else if(n==1){
	                  cout<<"0"<<endl;
	             } else
	             {
	                 cout<<"-1"<<endl;
	             }
	              
	             
	          
	     }
	return 0;
}
