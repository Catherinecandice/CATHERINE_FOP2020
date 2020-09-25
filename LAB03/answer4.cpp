#include <iostream>
using namespace std;

int main(){
  //n1 = first number
  //n2 = second number
  float n1, n2;

  //Insert the first & second number
  cout << "\nInput first number = ";
  cin >> n1;
  cout << "\nInput second number = ";
  cin >> n2;

  //s = case
  char s;
  //arithmetic operation
  cout << "\n1. addition";
  cout << "\n2. substraction";
  cout << "\n3. multiplication";
  cout << "\n4. division";
  cin >> s;

  switch(s)
  {
    //1st case = addition
    case'1':
      cout << "The Result of " << n1 << "+" << n2 << "=" << n1+n2 << endl;
    break;

    //2nd case = substraction
    case'2':
      cout << "The Result of " << n1 << "-" << n2 << "=" << n1-n2 << endl;
    break;

    //3rd case = multiplication
    case'3':
    {
      if (n2 != 0)
      cout << "The Result of " << n1 << "x" << n2 << "=" << n1*n2 << endl;

      else
      cout << "\nsecond number shouldn't be 0";
    }
    break;

    //4th case = division
    case'4':
      cout << "The Result of " << n1 << ":" << n2 << "=" << n1/n2 << endl;
    break;

    //other than all operation/other error
    default : 
      cout << "\nWrong input!";
  }
  
  return 0;
}