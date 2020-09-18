#include <iostream>
using namespace std;

int main(){
  //variables
  // C = Celcius
  // F = Fahrenheit
  int C, F;

  //first : insert Celcius Temperature
  cout << "If the Celcius Temperature = ";
  cin >> C;
  
  //second : calculate into Fahrenheit version using the formula
  F = (C * 9 / 5) + 32;
  cout << "Temperature that's converted from Celcius into Fahrenheit = " << F;
  
  return 0;
}