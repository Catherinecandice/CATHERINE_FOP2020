 #include <iostream>
#include <fstream>
#include <cstdlib>
#include <bits/stdc++.h> 
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

  // Descending
  string desc_name = student_name[0];
  int desc_score = student_score[i];
  int n = desc_score[]/desc_score[0];
  sort(desc_score, desc_score+n, greater<int>());
  cout << "Array after sorting : \n"; 
  for (int i = 0; i < n; ++i) 
    cout << desc_score[i] << " "; 

  // Ascending
  #include <bits/stdc++.h> 
  int arr[] = input.open("lab11_grade.txt");
  int n = sizeof(arr)/sizeof(arr[0]); 
  sort(arr, arr+n, greater<int>());
  cout << "Array after sorting : \n";
  for (int i = 0; i < n; ++i) 
  cout << arr[i] << " ";
  return 0; 
} 

  // Other option (Ascending)
  // int temp;
  // int j = student_score[i]-1;
	// for( i=0; i<(SizeArray); i++){		
	// 		if(desc_score > j){
	// 			temp=desc_score;
	// 			desc_score=j;
	// 			j=temp;
	// 		}
	// 	cout << "Desc = " << j << '\n';
  //   }

	// }
