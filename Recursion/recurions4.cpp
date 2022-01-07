//Count  the total  number on digit;
#include <iostream>
 using namespace  std;
   int  number(int n)
  {
        if(n==0)
        { 
             return 0;
        }
         int smalloutput= number(n/10);
          return smalloutput +1;

  }
    int main()
    {
        int n;
        cout<<"Enter the number:";
        cin>>n;
        int  totalNo= number(n);
                cout<<"Total number:"<<totalNo<<endl;
    }