#include <bits/stdc++.h>
using namespace std;
 void solve(){
      int n;
       cin>>n;
        vector<int> c;
        vector<int>c1;
         for(int i=0;i<n;i++){
               int temp;
                cin>>temp;
                 c[i]=temp;
                  c1[i]=temp;
         }
          int h=0;
           for(int i=0;i<n;i++){
               int count=0;
                for(int j=0;j<=i;j++){
                     if(c[j]>=h+1){
                           h++;
                     }
                } 
                 if(count>=h+1){
                      h++;
                       cout<<h<<" ";
                 }
                  
           }

 }


int main() {
  int tests;
  cin >> tests;
  for (int test_case = 1; test_case <= tests; test_case++) {
    // Get number of papers for this test case
    int paper_count;
    cin >> paper_count;
    // Get number of citations for each paper
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << test_case << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
