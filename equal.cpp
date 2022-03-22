#include <iostream>
#include <iomanip>
using namespace std;

struct Entry{
  string firstName;
  string lastName;
  char dorm;
  int age;
};

bool equal(Entry x, Entry y){
  if (x.firstName == y.firstName || x.lastName == y.lastName ||
      x.dorm == y.dorm || x.age == y.age)
    return true;
  else
    return false;
}

int main(){
    Entry e1 = {"Harry", "Potter", 'C', 25};
    Entry e2 = {"James", "Bond", 'D', 40};

    if (equal(e1, e2))
      cout << "same" << endl;
    else
      cout << "different" << endl;
}
