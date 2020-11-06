#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //THIRD: STRING
  //NUMBER 1: How many characters of the given string
  //variable declaration
  string p = "Hello World!";
  string q = "Prasetiya Mulya";
  string r = "SE2020 is the best!";

  //execute the total amount characters of the strings
  cout << "\n" << "the total amount characters of Hello World! string is ";
  cout << p.length() << endl;
  cout << "the total amount characters of Prasetiya Mulya string is ";
  cout << q.size() << endl;
  cout << "the total amount characters of SE2020 is the best! string is ";
  cout << r.length() << endl;

  //NUMBER 2: add string to other string
  //variable declaration
  string B1 = "My name is ", B2 = "John Trump";
  string B3 = "Have a ", B4 = "good day!";
  
  //Add one string to another
  string message1 = B1 + B2;
  cout << "\n" << message1 << endl;

  string message2 = B3 + B4;
  cout << message2 << endl << "\n";

  return 0;
  }