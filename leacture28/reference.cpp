#include<iostream>
using namespace std;

int& fun(int a){// it is bad practice
    int num=a;
    int& ans=num;
    return ans;// num and ans are local variable
    //  when we call it  it gives warning
}
void upadate(int n){
    n++;
}
void upadate1(int &n){
    n++;
}
 int main(){
     /*
       int i=5;
       //create a ref variable
        int &j=i;
         cout<<i<<endl;
         i++;
         cout<<i<<endl;
         j++;
         cout<<i<<endl;
         */
        int n=5;
         cout<<"Before "<<n<<endl;
         upadate(n);
         cout<<"After "<<n<<endl;


          cout<<"Before "<<n<<endl;
         upadate1(n);
         cout<<"After "<<n<<endl;
         
 }
