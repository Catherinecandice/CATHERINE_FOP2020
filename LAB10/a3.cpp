#include <iostream>
using namespace std;

int sum(int num){
  // variable declaration
  int random_num;
  int sum = 0;

  // looping for sum nums
  while (num > 0){
    random_num = num % 10;
    sum += random_num;
    num = num/10;
  }
  return sum;
}
int main(){
  // variable declaration
  int x; // x as the inputted num(s)

  // Input the random numbers by user
  cout << "Type down any random numbers = ";
  cin >> x;

  // Output of the sum
  cout << "The sum is " << sum(x);
}