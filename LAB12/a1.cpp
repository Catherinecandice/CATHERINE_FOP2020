#include <iostream>
using namespace std;

int main(){
  // Variable declaration
  const int SizeArray = 7;
  int my_arr[SizeArray] = {1, 4, 7, 2, 6, 3, 5};

  // Ascending
  for(int i = 0; i < SizeArray - 1; i++){
    int temp = my_arr[0];
	  for(int j = i + 1; j < SizeArray; j++){		
      if (my_arr[i] > my_arr[j]){
        temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }		
  }
  for (int i = 0; i < SizeArray; i++){
    cout << my_arr[i] << '\n';
  }

  cout << '\n';

  // Descending
  for(int i = 0; i < SizeArray - 1; i++){
    int temp = my_arr[0];
	  for(int j = i + 1; j < SizeArray; j++){		
      if (my_arr[i] < my_arr[j]){
        temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }		
  }
  for (int i = 0; i < SizeArray; i++){
    cout << my_arr[i] << '\n';
  }
}