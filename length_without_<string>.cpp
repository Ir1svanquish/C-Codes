#include <iostream>
using namespace std;

int length(string x)
{
  int count = 0;
  int y = 0;
  while (x[y] != '\0')
  {
    y++;
    count++;
  }
  return count;
}

int main()
{
  string x;
  getline(cin, x);
  cout << length(x) << endl;
}
