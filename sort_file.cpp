#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
  char filename[80] = "";
  cout << "Please enter the file name you want to operate." << endl;
  cin >> filename;
  ifstream fin(filename);

  if(fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  int x;
  int array[100] = {};
  int i = 0;
  while(fin >> x){
    array[i] = x;
    i++;
  }
  fin.close();

  ofstream fout("sorted.txt");

  if(fout.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }
  sort(array, array + i);
  for (int j = 0; j < i; j++){
    fout << array[j] << " ";
  }
  fout.close();
}
