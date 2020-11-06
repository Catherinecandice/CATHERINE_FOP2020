#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // FIRST: MATHEMATICAL FUNCTION
  // NUMBER 1
  // a. sin37
  // variable declaration
  double x = 37;
  double pi;
  pi = M_PI;
  double answer1;

  // execution
  answer1 = sin ( x *(pi / 180));
  cout << "sin of 37 degree is " << answer1 << endl;

  // b. cos53
  // variable declaration
  double y = 53;
  double answer2;

  // execution
  answer2 = cos (y * (pi / 180));
  cout << "cos of 53 degree is " <<answer2 << endl;

  // c. tan60
  // variable declaration
  double z = 60;
  double answer3;

  // execution
  answer3 = tan (z * (pi /180));
  cout << "tan of 60 degree is " << answer3 << endl;

  // NUMBER 2
  // a. degree of invers sin 0.58
  // variable declaration
  double m = 0.58;
  double rad1, degree1;

  // execution
  rad1 = asin (m);
  degree1 = rad1 * (180 / pi);
  cout << "\n" << "degree of invers sin 0.58 is " << degree1 << endl;

  // b. degree of invers cos 0.29
  // variable declaration
  double n = 0.29;
  double rad2, degree2;
  
  // execution
  rad2 = acos (n);
  degree2 = rad2 * (180 / pi);
  cout << "degree of invers cos 0.29 is " << degree2 << endl;

  // c. degree of invers tan 0.72
  // variable declaration
  double o = 0.72;
  double rad3, degree3;
  
  // execution
  rad3 = atan (o);
  degree3 = rad3 * (180 / pi);
  cout << "degree of invers tan 0.72 is " << degree3 << endl;

  // d. root of (156-12)
  // variable declaration
  double answer4;
  double a;
  
  // execution
  a = 156 - 12;
  answer4 = sqrt(a);
  cout << "\n" << "root of (156-12) is " << answer4 << endl << "\n" ;

  // NUMBER 3
  // variable declaration
  double X, Y;

  // find value of Y from the given X values
  for (X=1; X<5; X++){
    Y = 2*(pow(X,2)) - X + 7;
    cout << "For x = (x | 0 < x < 5), ";
    cout << "the value of y is " << Y << endl;
  }

  // NUMBER 4
  // round up and down

  // round of 5.89
  // variable declaration & execution
  double ans1 = ceil(5.89); // round up
  double ans5 = floor(5.89); // round down
  cout << "\n" << "the round up of 5.89 is " << ans1 << "\n";
  cout << "the round down of 5.89 is " << ans5 << "\n";
  
  // round of 7.2
  // variable declaration & execution
  double ans2 = ceil(7.2); // round up
  double ans6 = floor(7.2); // round down
  cout << "\n" << "the round up of 7.2 is " << ans2 << "\n";
  cout << "the round down of 7.2 is " << ans6 << "\n";
  
  // round of 12.05
  // variable declaration & execution
  double ans3 = ceil(12.05); // round up
  double ans7 = floor(12.05); // round down
  cout << "\n" << "the round up of 12.05 is " << ans3 << "\n";
  cout << "the round down of 12.05 is " << ans7 << "\n";

  // round of 0.03
  // variable declaration & execution
  double ans4 = ceil(0.03); // round up
  double ans8 = floor(0.03); // round down
  cout << "\n" << "the round up of 0.03 is " << ans4 << "\n";
  cout << "the round down of 0.03 is " << ans8 << "\n";

  return 0;
  }