#include <iostream>
#include <cmath>
using namespace std;

int main(){
  //variables of sphere
  // r = radius
  // V = Volume
  // SA = Surface Area
  double r, V, SA;
  double pi = 3.14;

  //insert the pi & radius
  cout << "The radius of sphere = ";
  cin >> r;

  //calculate the volume and the surface area using the written formula
  V = 4/3 * pi * pow(r,3);
  cout << "Sphere's Volume = " << V << endl;

  SA = 4 * pi * pow(r,2);
  cout << "Sphere's Surface Area = " << SA;

  return 0;
}