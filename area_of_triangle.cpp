#include <iostream>
#include<cmath>
using namespace std;

void Area(double a, double b, double c, double &perimeter, double &area){
  perimeter = (a + b + c) / 2;
  area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
  cout << area << endl;
}

int main(){
  double a, b, c, d = 0, e = 0;
  cin >> a >> b >> c;
  Area(a, b, c, d, e);
}
