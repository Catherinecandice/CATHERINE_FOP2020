#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Variable declaration
  string myname, fullname;
  string myage = "My age is 18 years old.";

  // Read File
  ifstream input; // Declare variable of Read File
  input.open("myname.txt");

  getline(input, myname, '\n');
  cout << myname;
  fullname = myname;

  input.close();

  // Write File
  ofstream output; // Declare variable of Write File
  output.open("myname.txt");

  output << fullname << "\n" << myage;

  output.close();

  cout << "\n" << "DONE";
}