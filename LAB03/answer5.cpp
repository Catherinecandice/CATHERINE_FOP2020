#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
srand(time(NULL)); 
//num = number
//ans = answer
float num = rand() % 100, ans;

//Input your number
cout << "\nInsert any number from scale 1 until 100 = ";
cin >> ans;

  //range of your number
  if (ans > 0 && ans <=100)
  
  //check our numbers condition
  {
    if (num == ans) {
      cout << "\nWe have the same number! " << num << " What a coincidence!";
    }

    if (num <= ans){
      cout << "\nYour number is higher than mine!";
      cout << "\nMine is = " << num << endl;
    }

    if (num >= ans){
      cout << "\nYour number is lower than mine!";
      cout << "\nMine is = " << num << endl;
    }
  }
  else
  cout << "Not Found!";

  return 0;
}