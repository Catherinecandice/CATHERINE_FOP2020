#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
  // Summon the file
  ifstream input;
  input.open("lab11_grade.txt");

  const int SizeArray = 40;

  // Variable declaration
  string student_name[SizeArray];
  int student_score[SizeArray];

  int i = 0;
  double average_score = 0;
  string line;

  // Outputs of the array
  while(getline(input, line)){
    int nameEndPos = line.find('-') - 1;
    student_name[i] = line.substr(0, nameEndPos);
    int scoreStartPos = line.find('-') + 1;
    int scoreEndPos = line.find('\n');
    student_score[i] = stod(line.substr(scoreStartPos, scoreEndPos));
    ++i;
  }

  for(int i = 0; i < SizeArray; i++){
    cout << student_name[i] << " = " << student_score[i] << "\n";
  }

  // Formula to get the lowest grade
  string lowest_name = student_name[0];
  double lowest = student_score[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_score[i] < lowest){
      lowest = student_score[i];
      lowest_name = student_name[i];
    }
  }

  // Formula to get the highest grade 
  string highest_name = student_name[0];
  double highest = student_score[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_score[i] > highest){
      highest = student_score[i];
      highest_name = student_name[i];
    }
  }
  
  // Formula to get the average grade
  int sum = 0;
  for (int i = 0; i < SizeArray; i++){
    sum += student_score[i];
  }
  int average = sum / SizeArray;
  cout << '\n' << "Average grade = " << average << '\n';
  cout << '\n';
  // Formula to get the grades above average
  // aa = above average 
  string aa_name = student_name[0];
  double aa = student_score[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_score[i] > average){
      aa = student_score[i];
      aa_name = student_name[i];
      cout << "Student who passed = " << aa_name << " - " << aa << '\n';
    }
  }

  cout << '\n';

  // Formula to get the grades under average
  // ua = under average 
  string ua_name = student_name[0];
  double ua = student_score[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_score[i] < average){
      ua = student_score[i];
      ua_name = student_name[i];
      cout << "Student who did not pass = " << ua_name << " - " << ua << '\n';
    }
  }

  input.close();

  // Outputs for lowest & highest grades
  cout << '\n' << "Lowest grade = " << lowest_name << " - " << lowest << '\n';
  cout << '\n' << "Highest grade = " << highest_name << " - " << highest << '\n';

  return 0;
}