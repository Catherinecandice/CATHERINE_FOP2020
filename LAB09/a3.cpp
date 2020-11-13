#include <iostream>
using namespace std;

void greeting (string name){
  //greet user by the given name
  cout << "\n" << "Hi! " << name << " Nice to meet you!";
}
int main(){
  // variable declaration
  string n;

  //call user to input name
  cout << "Hi! What's your name? ";
  cin >> n;
  greeting(n);
  
}