#include <iostream>
#include <string>
using namespace std;

int main()
{
  string x;
  getline(cin, x);
  int l = x.length();
  for (int y = 0; y < l / 2; y++){
    if (x[y] != x[l - 1 - y]){
      cout << x << " is not a palindrome." << endl;
      break;
    }
  if (y == l / 2 - 1)
    cout << x << " is a palindrome." << endl;
  }
}
