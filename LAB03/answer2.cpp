#include <iostream>
using namespace std;

int main(){
  //time = for the numbers of time
  double time;
  //Input your chosen time
  cout << "\nWhat time is it? = ";
  cin >> time;

    //want to make sure to see the time includes Morning/Afternoon/Evening 
    //other than that, it's an error
    {
    if ((time >= 0) && (time < 12))
      cout << "\nGood Morning!";
    
    else if ((time >= 12) && (time < 18))
      cout << "\nGood Afternoon!";
    
    else if ((time >= 18) && (time < 24))
      cout << "\nGood Evening!";

    else
    cout << "Error, try again";  
    }
  
return 0;
}