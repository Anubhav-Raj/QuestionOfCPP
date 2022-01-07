/* output
Enter the Row:7
Enter the col:7
 *  *  *  *  *  * 
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 */
#include<iostream>
using namespace std;
 int main()
 {
     int row, col;
     cout<<"Enter the Row:";
     cin>>row;
     cout<<"Enter the col: ";
     cin>>col;
       for (int i = 1; i < row; i++)
       {
            for (int j = 1; j < col; j++)
            {
                cout<<" * ";

            }
             cout<<endl;
       }
        return 0;


 }

