#include <bits/stdc++.h>
using namespace std;
class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
//delfult Consturcter
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    //Copy Constructer
    DynamicArray(DynamicArray const &d){
         //this->data=d.data;//shallow Copy

          // Deep Copy
           this->data= new int[d.capacity];
            for( int i=0; i<d.nextIndex; i++){
                this->data[i]=d.data[i];
            }
         this->nextIndex=d.nextIndex;
         this->capacity=d.capacity;
    }


     void operator=(DynamicArray const &d){
           this->data= new int[d.capacity];
            for( int i=0; i<d.nextIndex; i++){
                this->data[i]=d.data[i];
            }
         this->nextIndex=d.nextIndex;
         this->capacity=d.capacity;
     }
    void addElement(int element)
    {
        if (nextIndex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int get(int i) const
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }
      void add(int i, int element){
            if(nextIndex >i){
                 data[i]=element;
            }else if( nextIndex==i){
                   addElement(element);
                    nextIndex++;
              } else{
                   return;
              }
      }
       void print() const  {
            cout<<"[ ";
            for(int i=0;i< nextIndex;i++){
                 cout<<data[i]<<", ";
            }
              cout<<" ]"<<endl;
       }
};