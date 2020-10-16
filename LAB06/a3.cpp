#include <iostream>
using namespace std;

int main() {
  //variables
  int row, column;

  //the formula for the pattern
  for (row=1 ; row<=5 ; row++){
    for (column=1 ; column<=row; column++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}