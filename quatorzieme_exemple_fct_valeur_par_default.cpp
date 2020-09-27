#include <iostream>

using namespace std;

// FUNCTION PROTOTYPES

void fct(int a = 0, int b = 12);

// MAIN

int main(void){

  int n = 10, p = 20;

  fct(n,p);
  fct(n);
  fct();

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS
void fct(int a, int b){

  cout << " PREMIER ARGUMENT = " << a << endl;
  cout << " SECOND ARGUMENT = " << b << endl;

  return; 
}
