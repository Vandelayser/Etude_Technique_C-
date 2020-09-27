#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

float fexple(float x, int b, int c);

// MAIN

int main(void){

  float x = 1.5;
  float y, z;
  int n = 3, p = 5, q = 10;

  y = fexple(x,n,p);
  z = fexple(x+0.5, q, n-1);

  cout << "Valeur de y : " << y << endl;
  cout << "Valeur de z : " << z << endl;

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATION

float fexple(float x, int b, int c){

  float val;

  val = (x * x) + (b * x) + c;

  return val;
}
