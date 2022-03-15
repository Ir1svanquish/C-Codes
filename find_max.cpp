#include <iostream>
using namespace std;

int FindMax(int a[], int aSize){
  int max_0 = a[0];
  int index = 0;
  for (int i = 0; i < aSize; i++){
    if (a[i] > max_0){
      index = i;
      max_0 = a[i];
    }
    else if (a[i] == max_0)
      index = i;
  }
  return index;
}


int main(){
 int freq[11] = {0};
 int input = 0;
 int aSize = 0;
 while (input != -1){
   cin >> input;
   aSize += 1;
   if (freq[input] == 0)
     freq[input] = 1;
   else
     freq[input] += 1;
 }
 for (int i = 0; i < 11; i++){
   cout << "The frequency of " << i << " is " << freq[i] << endl;
 }
 cout << "The mode of the input numbers is " << FindMax(freq, aSize) << endl;
}
