#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main(){
  char filename[80] = "";
  cout << "Please enter the file name you want to copy." << endl;
  cin >> filename;
  ifstream fin(filename);

  if(fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }

  ofstream fout("copy.txt");

  if(fout.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }

  string line;

  while(getline(fin, line)){
    fout << line << endl;
  }
  fout.close();
  fin.close();
}
