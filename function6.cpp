#include<iostream>
using  namespace std;
 int max(int a, int b, int c)
 {
        if(a>b && a>c)
        {
             return a;
        } else if(b>c && b>a)
        {
             return b;
        } else {
               return c;
        }
 }
 bool triplate(int a, int b, int c)
 {  int x,y;
       int maximun = max(a,b,c);
        if(maximun==a)
        {
              y=b;
              x=c;
        } else if(maximun==b)
        {
              x=a;
              y=c;
        } else{
                x=a;
                y=b;
        }
          
           if(maximun*maximun== (x*x +y*y))
           {
               return   false;
           } else{
                return true;
           }
 }
 int  main()
 {
      int a,b,c;
       cout<<"Enter the three triplet";;
       cin>>a>>b>>c;
        if(triplate(a,b,c)==false)
        {
               cout<<"Pythagoria triplate";
        } else{
             cout<<" Not Pythagoria triplate";
        }
 }