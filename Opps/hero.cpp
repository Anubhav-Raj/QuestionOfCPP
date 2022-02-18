#include <bits/stdc++.h>
using namespace std;
 class hero {
      public:
      int health;
      char level;
      char *name;
      public:
      hero(){
           cout<<"Defult constructrer"<<endl;
            name = new char[100];
      }
       void print(){
            cout<<endl;
             cout<< "[ Name: "<< this->name<<",";
             cout<<"Leve: "<<this->level<<",";
             cout<<"Health: "<<this->health<<" ]";
              cout<<endl<<endl;
       }
        
         void setleve( char level){
              this->level=level;
         }
          void setHealth(int health){
               this->health=health;
          } 
          void setName(char name[]){
                 strcpy( this->name, name);
          }
        
       

 };