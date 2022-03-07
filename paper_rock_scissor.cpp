#include <iostream>
using namespace std;

int main(){
  char n, m;

  cin >> n >> m;
  switch(n){
    case 'P':
    case 'p':
      switch(m){
        case 'R':
        case 'r':
          cout << "Player 1 wins!" << endl;
          break;
        case 'S':
        case 's':
          cout << "Player 2 wins!" << endl;
          break;
        default:
          cout << "Tie!" << endl;
          break;
      }
      break;
    case 'R':
    case 'r':
      switch(m){
        case 'S':
        case 's':
          cout << "Player 1 wins!" << endl;
          break;
        case 'P':
        case 'p':
          cout << "Player 2 wins!" << endl;
          break;
        default:
          cout << "Tie!" << endl;
          break;
    }
    break;
    case 'S':
    case 's':
      switch(m){
        case 'P':
        case 'p':
          cout << "Player 1 wins!" << endl;
          break;
        case 'R':
        case 'r':
          cout << "Player 2 wins!" << endl;
          break;
        default:
          cout << "Tie!" << endl;
          break;
    }
    break;
  }
}
