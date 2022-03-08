#include <iostream>
#include <string>
using namespace std;

string returnNickNameGivenLastName(string name[], int n, string lastName)
{ int available = 0;
  string s;
  for (int i = 0; i < n; i++){
    int pos = name[i].find(lastName);
    if (pos != -1){
      int l = lastName.length();
      int m = name[i].length();
      s = name[i].substr(pos + l + 2, m - pos - l - 3);
      available = 1;
    }
  }
  if (available == 1)
    return s;
  else
    return "Not found!";
}

int main(){
  string name[] = {"Loretta, Choi (Loretta)",
                   "Kin Hei, Kwok (Haley)",
                   "Tsz Hei, Tse (Henry)",
                   "Luv, Khanna (Luv)",
                   "Tsz Wa, Tseng (Lucas)",
                   "Tsz Ching, Fung (Sara)"};

  int NumOfUsers = 6;
  string lastName;
  cin >> lastName;
  cout << returnNickNameGivenLastName(name, NumOfUsers, lastName) << endl;
  return 0;
}
