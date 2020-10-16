#include <iostream>
using namespace std;

int main() {
  //variable from 1 until 100
  int num = 0;
  
  //condition if num is multipled of 5, the num won't display
  //num will display if multipled of 3
  while (num < 100){
    if (num % 5 == 0){
      num += 3;
      continue;
    }

    //execute
    cout << num << endl;
    num += 3;
  }
}