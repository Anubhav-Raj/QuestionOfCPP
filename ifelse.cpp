#include<iostream>
using namespace std;
 int  main()

 {
      int  saving;
      cout<<"Enter the saving:";
      cin>>saving;
      if(saving>5000)
      {
          if (saving>10000)
      {
        cout<<"Roadtrip with neha"<<endl;
      }else
      {
             cout<<"Go with neha on shopping\n";
      }
      

      }else if(saving>2000){
          cout<<"Go with Reshi\n";
      }else{
          cout<<"with friend"<<endl;
      }
       return 0;

 }