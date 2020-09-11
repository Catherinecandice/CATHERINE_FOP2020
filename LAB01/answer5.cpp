#include <iostream>
using namespace std;

int main(){
  //variables
  //bhr stands for "before hour"
  //bhr1 is for 14.00
  //bhr2 is for 21.00
  int bhr1 = 14, bhr2 = 21;

  //ahr stands for "after hour"
  int ahr1, ahr2;

  //compute into 12 hour system from 14.00
  ahr1 = bhr1 % 12;
  cout << "14.00 same as " << ahr1 << " pm" << endl;

  //compute into 12 hour system from 21.00
  ahr2 = bhr2 % 12;
  cout << "21.00 same as " << ahr2 << " pm" << endl;

  return 0;
}