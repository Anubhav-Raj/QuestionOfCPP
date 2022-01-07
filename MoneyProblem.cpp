 // in this program  to solve  money problem
#include <iostream>
using namespace std;
int main()
{
     int n=1330;
     int  hundred=0,fifty=0,twenty=0,ten=0,one=0;
      if(n<0){
           cout<<"Enter Postive Money";
      }
      switch(1){
           case 1:
           if(n>50){
             hundred= n/100;
             n=n-(hundred*100);
            
              cout<<"no of 100's note:"<<hundred<<endl;
           }
             case 2:
             if(n>50){
              fifty=n/50;
              n=n-(fifty*50);
               cout<<"no of 50's note:"<<fifty<<endl;
             }
              case 3:
                if(n>20){
                     twenty=n/20;
                     n=n-(twenty*20);
                       cout<<"no of 20's note:"<<twenty<<endl;
                }
                case 4:
                if(n>1){
                     one=n/1;
                     n=n-(one*1);
                       cout<<"no of 1's note:"<<one<<endl;
                }
                 break;
                 default:
                 cout<<"sorry";
      }

    return 0;
}
