#include <iostream>
using namespace std;

//formula for the amount of time to print the given word
void print(string word, int times){
  for(int i=1; i<=times; i++){
    cout << word << endl;
  }
}

int main(){
  //variable declaration
  string inputWord;
  int inputTimes;

  //Input the word and the amount of time to print 
  cout << "Input the string = ";
  cin >> inputWord;
  cout << "Input the amount of time = ";
  cin >> inputTimes;

  print(inputWord, inputTimes);
  return 0;
}