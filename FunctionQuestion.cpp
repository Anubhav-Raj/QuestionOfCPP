//1 home work Question:
#include <iostream>
using namespace std;
int ap(int a){
      int AP=(3*a)+7;
       return AP;
 }
int main(){
    int n; cin>>n;
    cout<<" nth tern is "<<ap(n)<<endl;
    return 0;
}
//2. homework Question: method  one:
 #include <iostream>
using namespace std;
 int bits(int a){ 
     int tsetbit=0;
  while(a!=0){
       int temp =a%10;
        if(temp==1)
        {
             tsetbit++;
        }
         a=a/10;
  }
        return tsetbit;
 }
 
int main(){
    int a,b; cin>>a>>b;
    cout<<" no. of one: "<<bits(a)+bits(b)<<endl;
    return 0;
}

 third:
 #include <iostream>
using namespace std;
  void fab(int n){
       int a=0,b=1,sum=0;
        cout<<a<<" "<<b<<" ";
        for(int i=1;i<=n;i++)
        { sum=a+b;
         cout<<sum<<" ";
          a=b;
          b=sum;
        }
  }
 
int main(){
    int a;
    cin>>a;
    fab(a);
    return 0;
}




