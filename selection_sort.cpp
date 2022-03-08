#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
  return;
}

void sort(int array[], int sizeOfArray)
{
  int i, j, idx;
  int min;

  for (i = 0; i < sizeOfArray; ++i)
  {
    min = array[i];
    idx = i;
    for (j = i + 1; j < sizeOfArray; ++j)
    {
      if (array[j] < min)
      {
        min = array[j];
        idx = j;
      }
    }
    if (idx != i)
      swap(array[i], array[idx]);
  }
}

void print_array(const int array[], int sizeOfArray)
{
  for (int i = 0; i < sizeOfArray; ++i)
    cout << "[" << setw(2) << i << "]";
  cout << endl;

  for (int i = 0; i < sizeOfArray; ++i)
    cout << setw(3) << array[i] << " ";
  cout << endl;
}

int main()
{
  const int arraySize = 6;
  int a[ arraySize ] = {-2, 7, 0, 23, 2048, -46};

  cout << "Original array: ";
  print_array(a, arraySize);

  sort(a, arraySize);

  cout << "Sorted array: ";
  print_array(a, arraySize);

  return 0;
}
