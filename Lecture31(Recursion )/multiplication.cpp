
#include <iostream>
using namespace std;
int products(int x, int y)
{
  // base case
     if(y==0)return 0;
     // Recurcive Call
      return x+products(x,y-1);
}


int main()
{ 
    int m,n;
     cin>>m>>n;
    cout<<"Muliplication is :"<<products(m,n);
    return 0;
}
