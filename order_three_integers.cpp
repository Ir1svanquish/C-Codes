#include <iostream>
using namespace std;

void Islarger(int &a, int &b){
  if (b > a){
    int tmp = a;
    a = b;
    b = tmp;
  }
}

void OrderThreeIntegers(int &a, int &b, int &c){
  Islarger(a, b);
  Islarger(a, c);
  Islarger(b, c);
}

int main(){
  int a = 1, b = 2, c = 3;
  cout << "a = " << a << " b = " << b << " c = " << c << endl;
  OrderThreeIntegers(a, b, c);
  cout << "a = " << a << " b = " << b << " c = " << c << endl;
}
