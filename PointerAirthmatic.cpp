#include<iostream>
 using  namespace std;
  int main()
  {
      int *p;
      char *ch;
      double *d;
    //cout<<"Intenger:"<<sizeof(p)<<" Char: "<<sizeof(ch)<<"Double: "<<sizeof(d)<<endl;
    // size of  all pointer  is same it  may  be 4 /8 byte.
    
    //Pointer Airthmatic
     int i=10;
     int* pr;
      cout<<pr<<endl;//0x61ff50
       pr= pr+1; // Added 4 bit in address;
       cout<<pr<<endl;//0x61ff54
         pr= pr-1; // subtract 4 bit in address;
       cout<<pr<<endl;//0x61ff50
     


  }