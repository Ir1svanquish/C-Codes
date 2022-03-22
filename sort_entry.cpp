#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
using namespace std;

struct Entry{
  string firstName;
  string lastName;
  char dorm;
  int age;
};


int main(){
  struct Entry content[100];
  int size = 0;
  ifstream fin("entry.txt");

  if(fin.fail()){
    cout << "Error in file opening!" << endl;
    exit(1);
  }

  string firstName, lastName, line;
  char dorm;
  int age, index = 0;
  while (getline(fin, line)){
    istringstream iss(line);
    iss >> firstName >> lastName >> dorm >> age;
    content[index] = {firstName, lastName, dorm, age};
    index ++;
  }

  fin.close();

  int rank[100] = {};
  for (int i = 0; i < index; i++)
    rank[i] = content[i].age;

  sort(rank, rank + index);
  
  for (int i = 0; i < index; i++){
    for (int j = 0; j < index; j++){
      if (content[j].age == rank[i]){
        cout << content[j].firstName << ' ' << content[j].lastName << ' '
             << content[j].dorm << ' ' << content[j].age << endl;
      }
    }
  }
}
