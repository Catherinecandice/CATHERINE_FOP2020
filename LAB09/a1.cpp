#include <iostream>
#include <cmath>
using namespace std;

// Inputs declaration
// Sum
int sumnum (int num1, int num2){
  // variable declaration
  int result1;

  // formula of sum
  result1 = num1 + num2;
  return result1;
}

// Substract
int subnum (int num1, int num2){
  // variable declaration
  int result2;

  // formula of substract
  result2 = num1 - num2;
  return result2;
}

// Multiply
int mulnum (int num1, int num2){
  // variable declaration
  int result3;

  // formula of multiply
  result3 = num1 * num2;
  return result3;
}

// Division
int dinum (int num1, int num2){
  // variable declaration
  int result4;

  // formula of division
  result4 = num1 / num2;
  return result4;
}

// Outputs
int main() {
  // variable declaration
  int num1 = 2;
  int num2 = 3;

  // execute of each operations
  cout << "The sum of " << num1 << " and " << num2 << " is " << sumnum(num1, num2) << endl;
  cout << "The substract of " << num1 << " and " << num2 << " is " << subnum(num1, num2) << endl;
  cout << "The multiply of " << num1 << " and " << num2 << " is " << mulnum(num1, num2) << endl;
  cout << "The division of " << num1 << " and " << num2 << " is " << dinum(num1, num2);

  return 0;
  }