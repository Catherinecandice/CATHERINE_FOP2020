#include <iostream>
using namespace std;
 
// Function to calculate the sum of the given array 
double sums(int myList[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += myList[i];
  return (double) sum;   
}

// Function to calculate the average of the given array
double average(int myList[], int n){
  sums(myList, n);
  return (double)sums(myList, n) / n;
}
 
int main()
{
  // Variables from the given array
	int myList[] = {4, 7, 12, 5, 2};
  int n = sizeof(myList) / sizeof(myList[0]);
 
  // Call the functions
	cout << sums(myList, n) << "\n";
  cout << average(myList, n);
  
	return 0;
}