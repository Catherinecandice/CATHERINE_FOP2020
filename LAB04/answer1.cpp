#include <iostream>
using namespace std;

int main() {
  //variable
  //yo = years old    
  int yo;

    //Insert your age
    cout << "How old are you?\n" ;
    cout << "I'm " ;
    cin >> yo;

    //Categories of age
    if (yo >= 0 && yo < 12){
        cout << "\nYou are a Child!" ;
    }
    else if (yo >= 12 && yo <= 18){
        cout << "\nYou are a Teenager!" ;
    }
    else if (yo > 18){
        cout << "\nYou are an Adult!" ;
    }
    else{
        cout << "\nOops! Try again next time!";
    }
  return 0;
}