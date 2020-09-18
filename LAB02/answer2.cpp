#include <iostream>
using namespace std;

int main(){
  //variables
  // al = age last year
  // at = age this year
  // an = age next year
  int al, at, an;

  //insert your current age
  cout << "Your age this year = ";
  cin >> at;

  //calculate your last year and next year using the written formula
  al = at - (i--);
  cout << "Your age last year = " << al << endl;

  an = at + (++i);
  cout << "Your age next year = " << an << endl;

  return 0;
}
