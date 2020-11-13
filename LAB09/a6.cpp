#include <iostream>
using namespace std;

// pow function
int pow(int inputNum, int powNum){
  // variable declaration
  int result = inputNum;

  // loop formula of the pow function
  for(int i=1; i < powNum; i++){
    result *= inputNum;
  }

  return result;
}

// sqrt function
double sqrt(double p){
  // variable declaration
  double q = p;
  double r = 1;
  
  // loop formula of the sqrt function
  while (q > r){
    q = (q + r) / 2;
    r = p / q;
  }

  return q;
}

// ceil function
int ceil(double inputNum){
  // variable declaration
  int returnNum;

  // formula for ceil function
  returnNum = inputNum;
  returnNum += 1;

  return returnNum;
}

// floor function
int floor(double inputNum){
  // variable declaration
  int returnNum;

  // formula for floor function
  returnNum = inputNum;

  return returnNum;
}
int main(){
  // variable declaration
  double num1 = 35.6;
  double num2 = 20;

  // outputs for each created functions above
  cout << pow(3,2) << endl;
  cout << sqrt(num2) << endl;
  cout << ceil(num1) << endl;
  cout << floor(num1);

  return 0;
}