#include <iostream>
using namespace std;

// a. Find the Max of 2 integer
int max (int num1, int num2){
  if (num1 > num2){
    return num1;
  }
  else{
    return num2;
  }
}

// b. Find the Min of 2 integer
int min (int x, int y){
  if (x < y){
    return x;
  }
  else{
    return y;
  }
}

// c. Find the Min of 2 double
double min (double a, double b){
  if (a < b){
    return a;
  }
  else{
    return b;
  }
}

// d. Find the Min of 3 double
double min (double p, double q, double r){
  if (p < q && q < r ){
    return p; // p is the smallest
  }
  if (q < r && r < p){
    return q; // q is the smallest
  }
  if (r < p && p < q){
    return r; // r is the smallest
  }
}

//Execution
int main(){
  cout << max(2,3) << endl; // a.
  cout << min(2,3) << endl; // b.
  cout << min(1.5,2.5) << endl; // c.
  cout << min(0.2,0.4,0.6) << endl; // d.
  return 0;
}