#include <iostream>
using namespace std;

int main(){
  //variables
  double area, circumference, pi = 3.14;
  int d = 10, r = 5;

  //area (luas lingkaran)
  area = pi*r*r;
  cout << "area = " << area << endl;
  
  //circumference (keliling lingkaran)
  circumference = 2*pi*r;
  cout << "circumference = " << circumference << endl;

  return 0;
}