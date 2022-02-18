#include <bits/stdc++.h>
#include "Fractional.cpp"
using namespace std;
int main()
{
   
    Fraction f1(10, 2);
    Fraction f2(15, 4);


     (f1+=f2)+=f2;
      f1.print();
      f2.print();


/*
 Fraction f3=f1++;
  f1.print();
   f3.print();
   */


    /*
    pre-increment
     f1.print();
      ++(++f1);
       f1.print();
       */

/*
  Fraction f3=++f1;
  f1.print();
   f3.print();
   */

/*
 f1.print();
++f1;
 f1.print();
*/

    /*
    Fraction f3 = f1 + f2; // operator overloding
    Fraction f5 = f1 * f2; // operator overloding
    Fraction f6 = f1 - f2; // operator overloding

    cout<<"Fraction 1:  ";f1.print();cout<<endl;
    cout<<"Fraction 2:  ";f2.print();cout<<endl;
    cout << "Addition:  "; f3.print();cout<<endl;
    cout << "Subtaction: ";f6.print();cout<<endl;
    cout << "Multiplaction: ";f5.print();cout<<endl;
    cout<<"Cheack Equilaity: "<<endl;
     if(f1 == f2){
          cout<<"YES ! Equal"<<endl;
     } else{
          cout<<"No! It's NoT"<<endl;
     }
       */

 
    return 0;
}