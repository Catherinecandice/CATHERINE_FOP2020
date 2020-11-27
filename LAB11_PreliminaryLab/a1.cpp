#include <iostream>
using namespace std;

// Function to display elements
void printElements(int myList[], int n){
  // Declaration for each element
  int first = myList[0];
  int last = myList[n - 1];
  int fourth = myList[n - 2];

  // The outputs
  cout << "a. First element = " << first << "\n";
  cout << "b. Last Element = " << last << "\n";
  cout << "c. 4th Element = " << fourth << "\n";
}

int main(){
  // Variables from the given array
  int myList[5] = {4, 7, 12, 5, 2};
  int n = sizeof(myList) / sizeof(myList[0]);
  
  // Call the function
  printElements(myList, n);

  return 0;
}