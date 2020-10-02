#include <iostream>
using namespace std;

int main() {
    //variables
    int weight, height;
    double BMI;

    //insert your weight and height
    cout << "Your weight (in kg) = ";
    cin >> weight;
    cout << "\nYour height (in m) = ";
    cin >> height;

    //Calculation of BMI
    BMI = weight / (height*height);
    
    //Found out which category of BMI
    if (BMI < 18.5){
        cout << "\nYou're Underweight, better consume more food!";
    }
    else if (BMI >= 18.5 && BMI <=24.9){
        cout << "\nYou're Normal, keep it up!";
    }
    else if (BMI >= 25 && BMI <= 29.9){
        cout << "\nYou're Overweight, work out might help!";
    }
    else if (BMI >= 30){
        cout << "\nYou're Obesity, eat less sugar & healthier food, also work out too!";
    }
    else{
        cout << "\nTry again next time!";
    }
    return 0;
}