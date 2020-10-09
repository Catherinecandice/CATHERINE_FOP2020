#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    //variables
    //rd1 = your guess number
    //rd2 = the random number from the computer
    int rd1;
    char ContinueLoop = 'C';

    //random numbers
    srand(time(0));
    int rd2 = rand() % 101;

    //Explanation
    cout << "Hi! Guess my number!";
    cout << "\nFirst, you input your guess number.";
    cout << "\nLater on we'll see if guess it right or not!\n";
    
    while (ContinueLoop == 'C' && rd1 != rd2)
    {
    //Guess the number
    cout << "\nYour guess number = ";
    cin >> rd1;

    //check the condition
    if (rd1 == rd2){
        cout << "\nWow! You guess it right! So cool!" << endl;
        break;
    }
    else if (rd1 > rd2){
        cout << "\nOops! Your guess's too high!" << endl;
    }
    else{
        cout << "\nOops! Your guess's too low!" << endl;
    }
    
    //Selection
    cout << rd2;
    cout << "\nDo you want to continue or stop?";
    cin >> ContinueLoop;
    }

    return 0;

}