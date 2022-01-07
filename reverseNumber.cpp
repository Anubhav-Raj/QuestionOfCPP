#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	    while(t--){
	      long  int n;
	         cin>>n;
	          long int reverse=0;
	            while(n>0){
	                  long int rem=n%10;
	                   reverse=reverse*10+rem;
	                    n=n/10;
	            }
	             cout<<reverse<<endl;
	    }
	return 0;
}
