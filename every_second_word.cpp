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

  string content = "";
  string line;
  while(getline(fin, line)){
    content += line;
    content += "\n";
  }
  fin.close();

  int count = 1;
  string word;

  istringstream line_in(content);

  while (line_in >> word){
    if (count % 2 == 0){
      cout << word << " ";
    }
    count++;
  }
}
