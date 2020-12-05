#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  // Summon the file
  ifstream input;
  input.open("lab11_randnum.txt");

  const int SizeArray = 100;

  int myArray[SizeArray];
  int i = 0;

  // Outputs of the array
  for(int i = 0; i < SizeArray; i++){
    input >> myArray[i];
    cout << myArray[i] << '\n';
  }

  // Variable declaration
  int lowest, highest;
  int sum = 0;

  // Formula to get the lowest number
  lowest = myArray[0];
  for(int i = 0; i < SizeArray; i++){
    if(myArray[i] < lowest){
      lowest = myArray[i];
      }
  }

  // Formula to get the highest number
  highest = myArray[0];
  for(int i = 0; i < SizeArray; i++){
    if(myArray[i] > highest){
      highest = myArray[i];
    }
  }

  // Formula to get the average number
  for (int i = 0; i < SizeArray; i++){
    sum += myArray[i];
  }
  int average = sum/SizeArray;

  // Outputs
  cout << "Lowest number = " << lowest << '\n';
  cout << "Highest number = " << highest << '\n';
  cout << "Average number = " << average;

  return 0;
}