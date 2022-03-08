#include <iostream>
#include <string>
using namespace std;

void reverse(string &x)
{
  int l = x.length();
  int tmp;
  for (int y = 0; y < l / 2; y++)
  {
    tmp = x[y];
    x[y] = x[l - 1 - y];
    x[l - 1 - y] = tmp;
  }
}

int main()
{
  string x;
  getline(cin, x);
  reverse(x);
  cout << x << endl;
}
