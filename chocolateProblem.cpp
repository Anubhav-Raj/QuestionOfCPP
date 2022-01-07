#include<iostream>
using namespace std;
int main()
{
     int rup;
     cout<<"Enter the  Rupess you have: ";
     cin>>rup;
     
      int cost=1,extraChoco;
      int totalChoco= rup/cost;
      int wapper= totalChoco;
     while (wapper >= 3)
     {
         int extraChoco=(wapper/3);
         int extreWapper= wapper% 3;
        totalChoco = totalChoco+extraChoco;
        wapper=extraChoco+extreWapper;

     }
     
        cout<<"Total chocolate: "<<totalChoco<<endl;
         cout<<"Total wapper Remain: "<<wapper;
    

}