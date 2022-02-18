// Given an array of n elements. Find the majority element, which appears more than n/2 times. Return 0 in
// case there is no majority element
#include <bits/stdc++.h>
using namespace std;
void findMajority(int arr[], int n)
{
    int max = -1, max_count = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            max = i;
        }
    }
    if (max_count > n / 2)
    {
        cout << max << endl;
        cout << "Majority Element is :" << arr[max] << endl;
    }
    else
    {
        cout << "No Majority Element" << endl;
    }
    // The Time Complexity is O(n2) + O(1) = O(n2) and Space Complexity is O(1)
}

int findMajority1(int arr[], int size)
{
    int majIndex = size / 2, count = 1;
    int i;
    int candidate;
    sort(arr, arr+size);
    candidate = arr[majIndex];
    count = 0;
    for (i = 0; i < size; i++){
        if (arr[i] == candidate)
            count++;
    }

    if (count > size / 2)
        return arr[majIndex];
    else
        return 0;

        /*
        Sorting algorithms take O(n.logn) time and single scan take O(n) time.
The Time Complexity of an algorithm is O(n.log n) and Space Complexity is O(1)*/
}
  
   int findMajority2(int arr[], int n){
        int index=0;
         int count=1;
          for(int i=1;i<n;i++){
                if(arr[i]==arr[index]){
                     count++;
                } else{
                     count--;
                }
                 if(count==0){
                      index=i;
                       count=1;
                 }
          }
           int max_count=0;
            for( int i=0;i<n;i++){
                 if(arr[i]==arr[index]){
                      max_count++;
                 }
            }
             if(max_count>n/2){
                  return arr[index];
             } else{
                  return 0;
             }
   }

int main()
{
    // Code Here

    int arr[] = {1,2,2,2,2,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
   // findMajority(arr, n);
     int majority=findMajority2(arr, n);
     if(majority){
          cout<<majority<<endl;
          
     } else{
         cout<<"0"<<endl;
     }

    return 0;
}