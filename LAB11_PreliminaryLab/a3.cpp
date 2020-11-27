#include <iostream>
using namespace std;

// Function to see if the given elements are even or odd
void EvenOdd1(int myList[], int n){
  // The first element
  int first = myList[0];
  if (myList[0] % 2 == 0){
    cout << "The first element is Even!" << "\n";}
  
  if (myList[0] % 2 != 0){
    cout << "The first element is Odd!" << "\n";}
 
  // The second element
  int second = myList[1];
  if (myList[1] % 2 == 0){
    cout << "The second element is Even!" << "\n";}
  
  if (myList[1] % 2 != 0){
    cout << "The second element is Odd!" << "\n";}

  // The third element
  int third = myList[2];
  if (myList[2] % 2 == 0){
    cout << "The third element is Even!" << "\n";}
  
  if (myList[2] % 2 != 0){
    cout << "The third element is Odd!" << "\n";}
  
  // The fourth element
  int fourth = myList[3];
  if (myList[3] % 2 == 0){
    cout << "The fourth element is Even!" << "\n";}

  if (myList[3] % 2 != 0){
    cout << "The fourth element is Odd!" << "\n";}

  // The fifth element
  int fifth = myList[4];
  if (myList[4] % 2 == 0){
    cout << "The fifth element is Even!" << "\n";}
  
  if (myList[4] % 2 != 0){
    cout << "The fifth element is Odd!" << "\n";}
}

int main(){
  // Variables from the given array
  int myList[] = {4, 7, 12, 5, 2};
  int n = sizeof(myList) / sizeof(myList[0]);

  cout << "Check each of the element is the even/odd number!" << "\n";
  EvenOdd1(myList, n); // Call the function

  return 0;
}