#include <iostream>
using namespace std;
int main()
{
    //Example 1
    /* int  i=1;
      i=i++ + ++i;
      cout<<i<<endl;*/
    //Example2
    /*int i=1,j=2,k;
      k=i+j+ i++ +j++ + ++i + ++j;
      cout<<i<<" "<<j<<" "<<k<<endl;*/
    //Example 3
    /*int i=0;
          //0    //0   //1  //1  
       i= i++ - --i + ++i -i--;
       cout<<i<<endl;*/
    //Example 4

   /* int i = 1, j = 2, k = 3;
    //1 //2   //3
    int m = i-- - j-- - k--;
    cout << i << " " << j << " " << k << " " << m;*/
      // Example 5
   int i=10,j= 20, k;
          //10   //9   //19  //20   //9 //20   //10 //19
       k= i-- - i++ + --j - ++j + --i - j-- + ++i -j++;
          //9    //10  //19  //20  //9  //19  //10  //20
       cout<<i<<endl;cout<<j<<endl;cout<<k<<endl;
       
        
       

    return  0;
}