
#include <iostream>
using namespace std;
int FirstOccurence(int arr[], int size, int key)
{
    int startingIndex = 0, lastIndex = size - 1, midIndex = 0;
    int ans=-1;
    while (startingIndex <= lastIndex)
    {
        midIndex = startingIndex + (lastIndex - startingIndex) / 2;
        if (key == arr[midIndex])
        {
            ans = midIndex;
            lastIndex = midIndex - 1;
        }
        else if (key > arr[midIndex])//Go right side
        {
            startingIndex = midIndex + 1;
        }
        else if (key < arr[midIndex])//go to left side
        {
            lastIndex = midIndex - 1;
        }

    }
    return ans;
}
int LastOccurence(int arr[], int size, int key)
{
    int startingIndex = 0, lastIndex = size - 1, midIndex = 0;
    int ans=-1;
    while (startingIndex <= lastIndex)
    {
        midIndex = startingIndex + (lastIndex - startingIndex) / 2;
        if (key == arr[midIndex])
        {
            ans = midIndex;
            startingIndex = midIndex + 1;
        }
        else if (key > arr[midIndex])//Go right side
        {
            startingIndex = midIndex + 1;
        }
        else if (key < arr[midIndex])//go to left side
        {
            lastIndex = midIndex - 1;
        }

    }
    return ans;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    cout<<"Enter the array Element (ascending  or descending   order: )";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << " Enter the the key " << endl;
    int key;
    cin >> key;

    if (FirstOccurence(arr, size, key) == -1)
    {
        cout << "not presnt in array";
    }
    else
    {
        cout << "First Occurrence of "<<key<<" is at index :" << FirstOccurence(arr, size, key)<<endl;
    }
    if (LastOccurence(arr, size, key) == -1)
    {
        cout << "not presnt in array";
    }
    else
    {
        cout << "Last Occurrence of "<<key<<" is at index :" << LastOccurence(arr, size, key)<<endl;
    }
     int total_No_Occurrence=(LastOccurence(arr, size, key)-FirstOccurence(arr, size, key))+1;

    cout<<"Total number of Occurrence "<<key <<"  in  array  is "<<total_No_Occurrence<<endl;

    return 0;
}
