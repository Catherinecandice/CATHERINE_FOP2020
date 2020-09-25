#include <iostream>
using namespace std;

int main(){
  int num;
  //Insert your favorite number
  cout << "\nWhat is your favorite number? = ";
  cin >> num;

  //check if the number is even or odd
  {
  if (num % 2 == 0)
  cout << "\nThe number is EVEN!";
  
  else
  cout << "\nThe number is ODD!";
  }
  
  return 0;
}