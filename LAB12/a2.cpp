#include <iostream>
using namespace std;

// Linear Search Function
void LinearSearch(int my_arr[], int key, int SizeArray, int index){
  for (int i = 0; i < SizeArray; i++){
    if (key == my_arr[i]){
      index = i;
    }
  }
  cout << "Number of " << key << " is at index " << index << '\n';
}

// Binary Search Function
void BinarySearch(int my_arr[], int key, int SizeArray, int index){
  int low = 0;
  int high = SizeArray - 1; 
  while(high > low){
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
  cout << "Number of " << key << " is at index " << index << '\n';
} 

int main(){
  // Variable declaration
  const int SizeArray = 7;
  int my_arr[] = {1, 4, 7, 2, 6, 3, 5};

  for (int i = 0; i < SizeArray; i++){
    cout << my_arr[i];
  }

  int key;
  cout << '\n' << "Insert the number = ";
  cin >> key;
  int index = 0;

  // Outputs using function
  LinearSearch(my_arr, key, SizeArray, index);
  BinarySearch(my_arr, key, SizeArray, index);
}