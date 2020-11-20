#include <iostream>
using namespace std;

// a. from Celcius to Fahrenheit
double F1(double C1){
  return (C1 * 9/5) + 32; // The formula from C to F
}

// b. from Fahrenheit to Celcius
double C2(double F2){
  return (F2 - 32) * 5/9; // The formula from F to C
}

//Execution
int main(){
  cout << F1(25); // a.
  cout << "\n" << C2(77); // b.
  return 0;
}