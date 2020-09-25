#include <iostream>
using namespace std;

int main(){
  //alp = alphabet
  char alp;
  
  //Insert any alphabet/number
  cout << "\nInput any alphabet = ";
  cin >> alp;
  
  //Diffirentiate to see if it's a vowel or consonant alphabet or even number
  {
  if (alp == 'a'||alp == 'i'||alp == 'u'||alp == 'e'||alp == 'o')
    cout << "\nThe alphabet is a vowel alphabet!";
  
  else if (alp == '0'||alp == '1'||alp == '2'||alp == '3'||alp == '4'||
           alp == '5'||alp == '6'||alp == '7'||alp == '8'||alp == '9')
    cout << "\nThat's not an alphabet, but a number!";

  else
   cout << "\nThe alphabet is a consonant alphabet!";
  }

  return 0;
}