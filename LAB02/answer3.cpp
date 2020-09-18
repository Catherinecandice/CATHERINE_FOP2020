#include <iostream>
#include <cmath>
using namespace std;

int main(){
  //variables of sphere
  // π = 3.14
  // r = radius
  // V = Volume
  // SA = Surface Area
  double π, r, V, SA;

  //insert the π & radius
  π = 3.14;
  cout << "The radius of sphere = ";
  cin >> r;

  //calculate the volume and the surface area using the written formula
  V = 4/3 * π * pow(r,3);
  cout << "Sphere's Volume = " << V << endl;

  SA = 4 * π * pow(r,2);
  cout << "Sphere's Surface Area = " << SA;

  return 0;
}