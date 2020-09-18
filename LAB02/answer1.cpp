#include <iostream>
using namespace std;

int main(){
  //variables
  // rl = rectangle's length
  // rw = rectangle's width
  // ra = rectangle's area
  // rp = rectangle's perimeter
  int rl, rw, ra, rp;

  //first : input the length & the width
  cout << "length = ";
  cin >> rl;

  cout << "width = ";
  cin >> rw;

  //second : calculate the area & the perimeter using the formula
  ra = rl * rw;
  cout << "rectangle's area = " << ra << endl;
  
  rp = 2 * (rl + rw);
  cout << "rectangle's perimeter = " << rp;

  return 0;
}
