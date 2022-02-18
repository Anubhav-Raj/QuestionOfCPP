#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
   int n= kingdom.length();
  if(kingdom[n-1]=='a'||kingdom[n-1]=='e' || kingdom[n-1]=='i' || kingdom[n-1]=='o' ||kingdom[n-1]=='u'){
      ruler="Bob";
  } else if(kingdom[n-1]=='y'){
      ruler="nobody";
  } else{
      ruler="Alice";
  }
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
