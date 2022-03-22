#include <iostream>
using namespace std;

int linearSearch(const int array[], int sizeOfArray,
                       int key, int startPos){
   for (int i = startPos; i < sizeOfArray; i++)
     if (array[i] == key)
       return i;
   return -1;
}

int main(){
  int result = 0, size = 9, startPos = 0, key;
  int array[] = {-46, 7, 0, 78, 2048, -2, 1, 78, 99};
  cout << "Please enter an integer you want to search: " << endl;
  cin >> key;
  while (result != -1){
    result = linearSearch(array, size, key, startPos);
    if (result != -1){
      startPos = linearSearch(array, size, key, startPos) + 1;
      cout << result << " ";
    }
    else
      cout << result << " ";
  }
}
