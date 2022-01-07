#include<iostream>
#include<algorithm>
#include<vector>
 using namespace std;
  int main(){
        vector<int>v;
         v.push_back(1);
          v.push_back(2);
           v.push_back(4);
            v.push_back(6);
             cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;// apply binery search on vector v if elemen t is font return true otherwise return false;
             cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;//it return   index of 6  where 6 is prent in vector'
             cout<<"Upper bound ->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
             cout<<"Vector is:";
              for(int i:v)
              cout<<i<<" ";
              cout<<endl;
               
               sort(v.begin(),v.end());
              cout<<"after sort vector is "<<endl;
              for(int i:v)
              cout<<i<<" ";
              cout<<endl;
              rotate(v.begin(),v.begin()+1,v.end());

              cout<<"After Rotete Vector is:";
              for(int i:v)
              cout<<i<<" ";
              cout<<endl;
              int a=5,b=6;
              cout<<"A :"<<a<<" "<<"B : "<<b<<endl;
              cout<<"Max of A,B :"<<max(a,b)<<endl;
              cout<<"Min of A,B :"<<min(a,b)<<endl;
              swap(a,b);
                cout<<"After Swap"<<endl;
                cout<<"A :"<<a<<" "<<"B : "<<b<<endl;
                string str="abcde";
                cout<<"String is: "<<str<<endl;
                reverse(str.begin(),str.end());
                cout<<" After reverse String is: "<<str<<endl;
                


               




  }