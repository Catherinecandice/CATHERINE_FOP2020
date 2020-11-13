#include <iostream>
#include <cmath>
using namespace std;

// Area of Circle!
// Area as the function the the circle's area
// area as the declared variable
double Area (double radius){
  // variable declaration
  double area;
  
  //the area formula
  area = M_PI*pow(radius, 2);

  return area;
}

// Volume of Sphere!
// Volume as the function the the sphere's volume
// volume as the declared variable
double Volume (double radius){
  // variable declaration
  double volume;

  // the volume formula  
  volume = (4/3)*M_PI*pow(radius, 3);

  return volume;
}

int main(){
  // variable declaration
  double radius;

  //Input the radius
  cout << "Input the radius = ";
  cin >> radius;

  //The results
  cout << "\n" << "The area of circle is " << Area(radius);
  cout << "\n" << "The volume of sphere is " << Volume(radius);
}