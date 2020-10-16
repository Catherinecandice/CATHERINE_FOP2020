#include <iostream>
using namespace std;

int main() {
  //variables
  int p, q, r;
  
  //input number to make the multiplication table
  cout << "Input number to display the multiplication table = ";
  cin >> r;

  //the formula
  for (p=1 ; p<=r ; p++){
    for (q=1 ; q<=r; q++){
      cout << p*q << " ";
    }
    cout << endl;
  }
  return 0;
}