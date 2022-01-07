// https://stackoverflow.com/questions/31490145/what-does-si-0-mean#:~:text=It%20seems%20that,is%20used%20expression
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0'); // s[0] -'0'=>49-48;
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P')
        hh += 12;
    if (hh == 12 && s[8] == 'A')
        hh = 0;

     printf("%02d:%02d:%02d\n", hh, mm, ss);
     //cout<<setw(2)<<setfill('0')<<hh<<":"<<mm<<":"<<ss<<endl;
          

    return 0;
}
/* it convert  string  to integer
    string   min = s.substr(3,2);// '12:40:22AM'  mean we  extret 40 from it
    stringstream obj1;  
    obj1 << min; // insert data into obj  
    obj1 >> m; // fetch integer type data
     ans = 40 


     */
