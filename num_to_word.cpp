#include <iostream>
using namespace std;

int main(){
  const char* s[] = {"zero","one", "two", "three", "four", "five", "six", "seven", \
"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", \
 "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", \
"fifty", "sixty", "seventy", "eighty", "ninety"};
  int num;
  cin >> num;
  if (num <= 20)
    cout << s[num] << endl;
  else if (num > 20 && num < 100){
    int tens = num / 10, units = num % 10;
    cout << s[18 + tens] << "-" << s[units] << endl;
  }
}
