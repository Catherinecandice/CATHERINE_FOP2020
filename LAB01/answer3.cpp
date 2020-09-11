#include <iostream>
using namespace std;

int main(){
  //values before swapping 
  int a = 7, b = 4, temp;

  //swapping the values
  temp = a;
  a = b;
  b = temp;

  //values after swapping
  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}