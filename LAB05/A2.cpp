#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
  //variables
  //q = question
  //au = answer by user
  //as = answer by system
  //s = score
  //o = operations
  int q = 1;
  int au, as;
  int s= 0;
  char o;

  //Explanation of numbers usage
  cout << "Let's do some operations! Let's do 10 times, shall we?";
  while (q<=10){
   double num1 = rand() % 100;
   cout << "\nFirst Number = ";
   cin >> num1;
   double num2 = rand() % 100;
   cout << "\nSecond Number = ";
   cin >> num2;

   //The Operations
   cout << "\nChoose the operations +,-,*,/ " << endl;
   cin >> o;

   switch(o){

     case'+':
       as = num1 + num2;
       cout << num1 << " + " << num2 << " = ";
       cin >> au;
       if (au != as) {
         cout << "\nOops incorrect! The correct answer is = " << as;}
     break; 
    
     case'-':
       as = num1 - num2;
       cout << num1 << " - " << num2 << " = ";
       cin >> au;
       if (au != as) {
         cout << "\nOops incorrect! The correct answer is = " << as;}
     break;

     case'*':
       as = num1 * num2;
       cout << num1 << " X " << num2 << " = ";
       cin >> au;
       if (au != as) {
         cout << "\nOops incorrect! The correct answer is = " << as;}
     break;

     case'/':
       if (num2 != 0){
       as = num1 / num2;
       cout << num1 << " : " << num2 << " = ";
       cin >> au;
        if (au != as) {
         cout << "\nOops incorrect! The correct answer is = " << as;}
       }
       else{
         cout << "Undefinied!";
       }
     break;
     
     default:
        cout<<"\nError! Wrong operation!";
        break;

    }
    //If user answer same as system answer
    if (au == as){
      s++;
      cout << "\nYou are correct! Well Done!";
    }
    //Next question
    q++;
  }
  //Final score
  cout<<"\nYour final score is "<< s << " out of 10";
  
  return 0;
}
  