#include <bits/stdc++.h>
using namespace std;
string remove(string str,  char ch)
{

    // base Case
    if (str.length()==0){
        return"";
    }
    //remove(str-1);
    if (str[0] == ch)
    {
         return  remove(str.substr(1),ch);
    } 
         return str[0]+ remove(str.substr(1),ch);
}
int main()
{
    // Code Here
    string str = "axb";
    char ch='x';
    string s=remove(str,ch);
     cout<<s;
     
}