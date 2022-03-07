#include <iostream>
using namespace std;

bool IsPerfect(int x){
  int divisor, sum = 0;
  for (divisor = 1; divisor < x; divisor++){
    if (x % divisor == 0)
      sum += divisor;
  }
  if (x == sum)
    return true;
  else
    return false;
}
int main(){
  int lower_limit, upper_limit, num;
  cin >> lower_limit >> upper_limit;
  for (num = lower_limit + 1; num < upper_limit; num++){
    if (IsPerfect(num) == true)
      cout << num << endl;
  }
}
