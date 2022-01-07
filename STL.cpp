#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create a vector
    vector<int> v;
    // cheack the capacity of vector  how much element can store in vector
    cout << "capacity ->" << v.capacity() << endl; // hear capacity is 0
                                                   // how to push element in vector
    v.push_back(1);                                // 1 is push in to 0th index;
    cout << "capacity ->" << v.capacity() << endl; // hear capacity is 1

    v.push_back(2);                                // 2 is push in to 1th index;
    cout << "capacity ->" << v.capacity() << endl; // hear capacity is 2

    v.push_back(3);                                // 3 is push in to 2th index;
    cout << "capacity ->" << v.capacity() << endl; // hear capacity  will be 4  bcz ager ham vector ki capacity se jada usme dalne ki kosis krte hai to uska size double ho jata hai.

    // print the size of vector , how many element present into vector
    cout << "Size is->" << v.size() << endl;
    // using .at we can find which elemrnt is present in ith index;
    cout << "Element  at 2nd Index " << v.at(2) << endl; // at 2 index we sotre 3
  
   cout<<"First element of vector is "<<v.front()<<endl;
   cout<<"Last element of vector is "<<v.back()<<endl;
// travers the vector
   cout<<"befor POP "<<endl;
   for (int i:v){
    cout<<i<<" ";
   }cout<<endl;
   //pop_back remove the last element from vector
    v.pop_back();

   cout<<"After  POP "<<endl;
    for (int i:v){
    cout<<i<<" ";
   }

cout<<"befor  clear size is "<<v.size()<<endl;

// it clear whole vector  but capcity remain same
v.clear();

cout<<"After  clear size is "<<v.size()<<endl;
   


//  second way to intilize  vector

 vector<int> a(5, 10);

 // a is vector name, 5 denot size of vector, 1 show whole vector is intilize with one.
   cout<<"Print B "<<endl;
   for (int i : a)
        cout << i << " ";
 //copy vector a in to  Last vector
 vector  <int>last{a};
 
    cout<<endl<<"Print last "<<endl;
   for (int i : last)
        cout << i << " ";



}