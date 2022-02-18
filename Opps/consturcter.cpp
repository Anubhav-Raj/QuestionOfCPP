#include <bits/stdc++.h>
#include "student.cpp"
using namespace std;
 
int main(){
//Code Here

 student  a1(10,1001,"Anubhav");
  student a2(20,2001,"rohit");
   student *a3 = new student(30,3001,"puneet");
    cout<<"For A1"<<endl;
    a1.display();
     cout<<"For A2"<<endl;
      a2.display();
      cout<<"For A3"<<endl;
      a3->display();

        cout<<"Copy a1 into a2"<<endl;
        a2=a1;
         a2.display();


         cout<<"Copy a3 into a1"<<endl;
         *a3=a1;
          a1=*a3;
           a1.display();
         a3->display();
          
           student a5=a1;// here copy cnstructer is called not  copy assigment called
           
        

         delete a3;// it delocate menory which create  dynamically.
// create a Destructer




/*
  student s1;
   //s1.display();


cout<<"Parameterrize Constructer Demo "<<endl;
 student s2(10,21,"Anubhva");
  s2.display();

   student *s3=  new student(101,33,"rohit");
    s3->display();

     cout<<"Copy Constructer"<<endl;
      student s4(s2);// copy the  value of s2 into s4;
       s4.display();
        
         student s5(*s3);
          s5.display();
*/
        

       
    


 return 0;
}