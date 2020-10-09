#include <iostream>
using namespace std;

int main(){
    //variable
    int number = 0;

    //process the while code by determining if the number is multiplied by 3 or multiplied by 5, or even both of it or neither
    while (number <= 50){
      if (number % 3 == 0 && number % 5 == 0){
        cout << "ZIPZAP" << endl;
      }
      else if (number % 3 == 0){
        cout << "ZIP" << endl;
      }
      else if (number % 5 == 0){
        cout << "ZAP" << endl;
      }
      else{
        cout << number << endl;
      }
      number++;
    }
}