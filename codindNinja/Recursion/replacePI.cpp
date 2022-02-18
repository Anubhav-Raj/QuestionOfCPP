#include <bits/stdc++.h>
using namespace std;
void replacePI(char str[], int start)
{
     // base case
     if (str[start] == '\0' || str[start+1] == '\0')
     {
          return;
     }
     replacePI(str, start + 1);
     if (str[start] == 'p' && str[start + 1] == 'i')
     {
          // Shifting the characters to right side to put 3.14 in the character array
           //cout<<start<<" ";
          for (int i = strlen(str); i >= start + 2; i--)
          {
                cout<<i<<" " <<start<<endl;
               str[i + 2] = str[i];
          }
            // Replacing with "3.14"
           str[start] = '3';
           str[start + 1] = '.';
           str[start + 2] = '1';
           str[start + 3] = '4';
     }
     
}
int main()
{
     // Code Here
     char str[] = "pixpix";
     replacePI(str, 0);

  
          cout <<str;
    

     return 0;
}