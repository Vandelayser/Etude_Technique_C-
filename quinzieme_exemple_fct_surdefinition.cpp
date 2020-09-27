#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

int surdefinition(int n);
float surdefinition(float n);

// MAIN

int main(void){

  int n = 17;
  float p = 17.52;

  cout << " SURDEF EN INT : " << surdefinition(n) << endl;
  cout << " SURDEF EN FLOAT : " << surdefinition(p) << endl;

  return EXIT_SUCCESS;
}

//  FUNCTIONS DECLARATIONS

int surdefinition(int n){
  return n;
}

float surdefinition(float n){
  return n;
}
