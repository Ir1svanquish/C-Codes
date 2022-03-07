#include <iostream>
using namespace std;

const double CONVERSION = 0.264179;

double GasolineConsumption(double x, double y){
  double gallons = x * CONVERSION;
  return y / gallons;
}

int main(){
  double liters, miles;
  char repeat = 'Y';
  while (repeat == 'Y'){
    cout << "Please enter the number of liters of gasoline consumed by\
 the user's car: ";
    cin >> liters;
    cout << "Please enter the number of miles the car delivered: ";
    cin >> miles;
    cout << "The number of miles per gallon the car gets is: " <<
    GasolineConsumption(liters, miles) << endl;
    cout << "Do you want to continue? (Y/N)" << endl;
    cin >> repeat;
  }
}
