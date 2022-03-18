#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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

  int y;
  fin >> y;
  int x, max = y, min = y;
  while(fin >> x){
    if (x > max)
      max = x;
    if (x < min)
      min = x;
  }
  
  fin.close();

  ofstream fout(filename, ios::app);

  if(fout.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }

  fout << max << " " << min << endl;
  fout.close();
}
