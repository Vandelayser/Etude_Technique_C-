#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

// MAIN

int main(void){

  int n = 10;
  float x = 5.25;

  initializer_list<int> li = {n, n+1 ,(2*n)+1 ,(3*n)+1, (4*n)+1};
  initializer_list<double> ld = {x, x+1 ,(2*x)+1 ,(3*x)+1, (4*x)+1};

  cout << " LISTE li = ";
  for(int i : li){
    cout << i << " ";
  }
  cout << endl;

  cout << " LISTE ld = ";
  for(double d : ld){
    cout << d << " ";
  }
  cout << endl;

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARIATIONS
