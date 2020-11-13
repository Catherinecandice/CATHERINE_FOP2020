#include <iostream>
using namespace std;

// a. swap the value of the given variables
void swap(int *x, int *y){
  // variable declaration
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

// b. check the odd/even number
string check(int a){
  // conditions of odd and even number
  if (a % 2 == 0){
    return "even";
  }
  else{
    return "odd";
  }
}

int main(){
  // variable declaration
  int x = 2;
  int y = 3;
  int a;

  // the output dislay for (a.) before swap
  cout << "the previous value of x and y are " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl << endl;

  // the output dislay for (a.) after swap
  swap(&x, &y);

  cout << "the new x and y are " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl << endl;

  // the output dislay for (b.)
  cout << "Input number = ";
  cin >> a;

  cout << "\n" << "your number is " << check(a);  

  return 0;
}

