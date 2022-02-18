#include <bits/stdc++.h>
using namespace std;
class Employ
{
    int age;
    //char *name;


public:
 char *name;
    Employ(int age, char *name)
    {
        this->age = age;
        //shellow Copy
       // this->name = name;

        // Deep copy
         this->name=new char[strlen(name)+1];
          strcpy(this->name,name);
    }
    // copy Constructer
     Employ(Employ const &e){
          this->age=e.age;
        //   this->name=e.name;//shallo Copy

           //Deep Copy
           this->name= new char[strlen(e.name)+1];
           strcpy(this->name,e.name);
           
     }
      void print(){
           cout<<endl<<"Name "<< this->name<<" Age: "<<this->age<<endl;
      }
};