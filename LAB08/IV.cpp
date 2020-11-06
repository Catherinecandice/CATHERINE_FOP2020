#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //FOURTH: FORMATTING CONSOLE OUTPUT
  //Formatting FOP and LINEAR [ALGEBRA]
  cout << left << setw(25) << "SE2021 Mid Exam Grade" << endl << "\n";
  cout << left << setw (12) << "FOP" << setw (12) << "Algebra" << "\n";
  cout << left << setw (7) << "John:" << setw(5) << " 90" << setw (7) 
       << "John:" << setw(5) << " 90" << "\n";
  cout << left << setw (7) << "Flora:" << setw(5) << " 87" << setw (7) 
       << "Flora:" << setw(5) << " 93" << "\n";
  cout << left << setw (7) << "Martha:" << setw(5) << " 72" << setw (7) 
       << "Martha:" << setw(5) << " 100" << "\n" << endl;
  
  //Formatting CALCULUS and [DISCRETE] MATH
  cout << left << setw (12) << "CALCULUS" << setw (12) << "DISCRETE" << "\n";
  cout << left << setw (7) << "John:" << setw(5) << " 70" << setw (7) 
       << "John:" << setw(5) << " 80" << "\n";
  cout << left << setw (7) << "Flora:" << setw(5) << " 92" << setw (7) 
       << "Flora:" << setw(5) << " 70" << "\n";
  cout << left << setw (7) << "Martha:" << setw(5) << " 78" << setw (7) 
       << "Martha:" << setw(5) << " 90" << "\n";


  return 0;
  }