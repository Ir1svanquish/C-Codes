#include <iostream>
#include <string>
using namespace std;

int find(string x, string y)
{
  int count = 0;
  int s = x.find(y, 0);
  while (s != -1){
    count++;
    s = x.find(y, s + 1);
  }
  return count;
}

int main()
{
  string x, y;
  getline(cin, x);
  getline(cin, y);
  cout << find(x, y) << endl;
}
