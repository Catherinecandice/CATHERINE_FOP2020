#include <iostream>
using namespace std;

int main() {
 //variables
 int month, year;

 //Insert number of the month and the year
 cout << "Type the number of the month you would like to know if it's the month of leap year = ";
 cin >> month;
 cout << "\nAlso type the year = ";
 cin >> year;

 //Check when is the month of leap year
 switch(month)
 {
 case(1): 
  cout << "\nIn January " << year << ", it has 31 days";
  break;

 case(2): 
 //2 condition : leap year or not
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    cout << "\nIn February " << year << ", it has 29 days";
  }
  else{
    cout << "\nIn February " << year << ", it has 28 days";
  }
  break;

 case(3): 
  cout << "\nIn March " << year << ", it has 31 days";
  break;

 case(4): 
  cout << "\nIn April " << year << ", it has 30 days";
  break;

 case(5): 
  cout << "\nIn May " << year << ", it has 31 days";
  break;

 case(6): 
  cout << "\nIn June " << year << ", it has 30 days";
  break;

 case(7): 
  cout << "\nIn July " << year << ", it has 31 days";
  break;

 case(8): 
  cout << "\nIn August " << year << ", it has 31 days";
  break;
 
 case(9): 
  cout << "\nIn September " << year << ", it has 30 days";
  break;

 case(10): 
  cout << "\nIn October " << year << ", it has 31 days";
  break;

 case(11): 
  cout << "\nIn November " << year << ", it has 30 days";
  break;

 case(12): 
  cout << "\nIn December " << year << ", it has 31 days";
  break;

 default:
  cout << "\nWrong Input!";
 }

 return 0;
}