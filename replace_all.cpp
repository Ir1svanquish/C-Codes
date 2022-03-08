#include <iostream>
using namespace std;

void replaceALL(string &input, string from, string to)
{
  int l = from.length();
  int s = input.find(from);
  while (s != -1){
    input.replace(s, l, to);
    s = input.find(from, s + 1);
  }
}

int main(){
  string input;
  getline(cin, input);
  cout << "Before replace" << endl << input << endl;
  replaceALL(input, "HKU", "The University of Hong Kong");
  cout << "After replace" << endl << input << endl;
  replaceALL(input, "The University of Hong Kong", "H.K.U.");
  cout << "After replace" << endl << input << endl;
}
