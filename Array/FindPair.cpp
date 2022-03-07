#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> g1;
  int n;
  cin >> n;
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    g1.push_back(a);
  }
  int target;
  cin >> target;

  sort(g1.begin(), g1.end());
      int count=0;
  int s = 0, e = g1.size() - 1;
     while (s<=e){
        if(target>g1[s]+g1[e]){
          s++;
        }else if(target<g1[s]+g1[e]){
           e--;
        } else{
          // cout<<g1[s]<<" "<<g1[e];
           count++;
            //break;
        }

     }
      cout<<count<<endl;
     
    

  return 0;
}
// Find a pair (a,b) such   that a+b=k  k is given