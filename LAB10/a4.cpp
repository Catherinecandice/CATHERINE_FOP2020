#include <iostream>
using namespace std;

int Calculation(int total, int& year, int& month, int& day){
  // declare all the formulas for the Calculation
  year = total / 365;
  total %= 365;
  month = total / 30;
  total %= 30;
  day = total; 

  return total;
}

int main(){
  // variable declaration
  int num1, num2, num3, num4;

  // Input by user to calculate the total numbers
  cout << "Enter the total number you want to calculate = ";
  cin >> num1;

  // Outputs
  Calculation(num1, num2, num3, num4);
  cout << "the total year(s) = " << num2 << "\n";
  cout << "the total month(s) = " << num3 << "\n";
  cout << "the total day(s) = " << num4;

  return 0;
}