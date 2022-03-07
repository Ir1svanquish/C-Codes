#include <iostream>
#include <cctype>
using namespace std;

void erase(char x[], int pos, int len){
  int str_length = 0;
  while(x[str_length] != '\0'){
    str_length++;
  }
  int i = pos;
  while(x[i+len] != '\0' && (i + len) <= str_length){
    x[i] = x[i + len];
    i++;
  }
  x[i] = '\0';
}

int main(){
  char x[] = "0123456789101112";
  cout << x << endl;
  int y, z;
  cin >> y >> z;
  erase(x, y, z);
  cout << x << endl;
}
