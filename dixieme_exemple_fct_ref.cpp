#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void swap(int &a, int &b);

// MAIN

int main(void){

  int a = 10;
  int b = 20;

  cout << " SITUATION AVANT SWAP "<< " A = " << a  << " B = " << b << endl;
  swap(a,b);
  cout << " SITUATION APRES SWAP "<< " A = " << a  << " B = " << b << endl;

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

void swap(int &a, int &b){

  int temp;

  temp = a;
  a = b;
  b = temp;
}
