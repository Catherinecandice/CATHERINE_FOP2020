#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
 //variables
 //id = input deposite
 //ow = out withdraw
 int id, ow; 
 int balance = 500;
 int option;
 char status;
 char y, n;

 //ATM transaction  
 cout << "Welcome to Bank ATM!\n";

 do{
    //Options of transaction
    cout << "\n1. Check balance";
    cout << "\n2. Deposite";
    cout << "\n3. Withdraw";
    cout << "\n4. Other Transaction";
    cout << "\nChoose your option = ";
    cin >> option;

  switch (option){
    case(1):
     cout << "\nYour balance = " << balance;
     break;
     
    case(2):
     cout << "\nInput the amount of money to deposite = ";
     cin >> id;
     balance = balance + id;
     cout << "\nYour total balance is " << balance;
     break;

    case(3):
     cout << "\nInput the amount of money to withdraw = ";
     cin >> ow;
     balance = balance - ow;
     cout << "\nYour total balance is " << balance;
     break;

    case(4):
     cout << "\nEnd your proccess? yes/no";
     cin >> status;
     break;
  }
  //after do the transaction
  cout << "\nWant to go back to menu?";
  cin >> status;

 }
 while(status == 'y');
 
}