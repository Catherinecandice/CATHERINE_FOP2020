#include <iostream>
using namespace std;

int main() {
    //variables of score
    int num1, num2, num3, average;

    //Insert the scores (each number is separated by a space)
    cout << "Insert 3 scores from scale 0 until 100 = ";
    cin >> num1 >> num2 >> num3;

    //Formula of average score
    average = (num1 + num2 + num3)/3;

    //Category of score grades
    if (average >= 80){
        cout << "\nYour grade is A";
    }
    else if (average >= 75 && average < 80 ){
        cout << "\nYour grade is AB"; 
    }
    else if (average >= 70 && average < 75 ){
        cout << "\nYour grade is B"; 
    }
    else if (average >= 65 && average < 70 ){
        cout << "\nYour grade is BC"; 
    }
    else if (average >= 60 && average < 65 ){
        cout << "\nYour grade is C"; 
    }  
    else if (average >= 40 && average < 60 ){
        cout << "\nYour grade is D"; 
    }  
    else if (average < 40){
        cout << "\nYour grade is E";
    }
    else {
        cout << "\nNot Found!";
    }
    return 0;
}