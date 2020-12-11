#include <iostream>
#include <fstream>
using namespace std;

// Sorting Array Function
void sort(int my_arr[], int SizeArray){
  int temp = 0; 
  for (int i = 0; i < SizeArray; i++){ 
    for (int j = i + 1; j < SizeArray + 1; j++){
      if (my_arr[i] > my_arr[j]){
        temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < SizeArray; i++)
  cout << my_arr[i] << '\n';
}

// Binary Search Function
void BinarySearch(int my_arr[], int key, int SizeArray, int index){
  int high = SizeArray - 1;
  int low = 0;
  while(high >= low){
    int mid = (high + low)/2;
    if (key < my_arr[mid]){
      high = mid - 1;
    }
    else if (key == my_arr[mid]){
      index = mid;
      break;
    }
    else if (key > my_arr[mid]){
      low = mid + 1;
    }
  }
  cout << key << '\n' << my_arr[index];

  if (key == 0){
    cout << '\n' << "Sorry! You Lose the Lottery! Try again!";
  }
  else if (key == my_arr[index]){
    cout << '\n' << "Congrats! You Win the Lottery!";
  }
  else{
    cout << '\n' << "Sorry! You Lose the Lottery! Try again!";
  }
} 

int main(){
  // Summon file
  ifstream input;
  input.open("lottery_winner.txt");

  // Variable declaration
  const int SizeArray = 7;
  int my_arr[SizeArray];

  for(int i = 0; i < SizeArray; i++){
    input >> my_arr[i];
  }

  sort(my_arr, SizeArray);

  int key;
  // Ask user to type 4 digits number
  cout << '\n' << "Insert the number = "; 
  cin >> key;
  int index = 0;

  // Output using function
  BinarySearch(my_arr, key, SizeArray, index);
}