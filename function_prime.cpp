#include<iostream>
 #include<cmath>
using namespace std;
  bool prime(int a)
 {
           for (int i = 2; i <sqrt(a); i++)
           {
                if(a%i==0)
                {
                    return false;
                }
           }
            return  true;
 }
 int main()
 {
    int  num1, num2;
    cout<<"Enter the number1:";
    cin>>num1;
    cout<<"Enter  the number2:";
    cin>>num2;
     for(int i=num1; i<= num2; i++)
     {
           if(prime(i))
           {
               cout<<"These are Prime number: "<<i<<endl<<endl;
           } else{
                cout<<"These are NON Prime number: "<<i<<endl;
            
           }
     }
    

  
 }