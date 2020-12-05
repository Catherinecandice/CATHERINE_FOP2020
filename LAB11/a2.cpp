#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
  // Summon the file
  ifstream input;
  input.open("lab11_employee.txt");

  const int SizeArray = 8;

  // Variable declaration
  string employee_name[SizeArray];
  int employee_salary[SizeArray];

  int i = 0;
  double average_salary = 0;
  string line;

  // Outputs of the array
  while(getline(input, line)){
    int nameEndPos = line.find('$') - 1;
    employee_name[i] = line.substr(0, nameEndPos);
    int salaryStartPos = line.find('$') + 1;
    int salaryEndPos = line.find('\n');
    employee_salary[i] = stod(line.substr(salaryStartPos, salaryEndPos));
    ++i;
  }

  for(int i = 0; i < SizeArray; i++){
    cout << employee_name[i] << " = " << employee_salary[i] << "\n";
  }

  // Formula to get the lowest salary
  string lowest_name = employee_name[0];
  double lowest = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] < lowest){
      lowest = employee_salary[i];
      lowest_name = employee_name[i];
    }
  }

  // Formula to get the highest salary 
  string highest_name = employee_name[0];
  double highest = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] > highest){
      highest = employee_salary[i];
      highest_name = employee_name[i];
    }
  }
  
  // Formula to get the average salary
  int sum = 0;
  for (int i = 0; i < SizeArray; i++){
    sum += employee_salary[i];
  }
  int average = sum / SizeArray;
  cout << '\n' << "Average salary = " << average << '\n';
  cout << '\n';

  // Formula to get the salary above average
  // aa = above average 
  string aa_name = employee_name[0];
  double aa = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] > average){
      aa = employee_salary[i];
      aa_name = employee_name[i];
      cout << "Salary above average = " << aa_name << " - " << aa << '\n';
    }
  }

  cout << '\n';

  // Formula to get the salary under average
  // ua = under average 
  string ua_name = employee_name[0];
  double ua = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] < average){
      ua = employee_salary[i];
      ua_name = employee_name[i];
      cout << "Salary under average = " << ua_name << " - " << ua << '\n';
    }
  }

  input.close();

  // Outputs for lowest & highest salaries
  cout << '\n' << "Lowest salary = " << lowest_name << " - " << lowest << '\n';
  cout << '\n' << "Highest salary = " << highest_name << " - " << highest << '\n';

  return 0;
}