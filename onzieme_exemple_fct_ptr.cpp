#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void swap(int *ptr_a, int *ptr_b);

// MAIN

int main(void){

  int a = 10;
  int b = 20;
  int *ptr_a = &a;
  int *ptr_b = &b;

  cout << " SITUATION AVANT SWAP "<< " A = " << a  << " B = " << b << endl;
  swap(ptr_a,ptr_b);
  cout << " SITUATION APRES SWAP "<< " A = " << a  << " B = " << b << endl;

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

void swap(int *ptr_a, int *ptr_b){

  int temp;
  int *ptr_temp = &temp;

  *ptr_temp = *ptr_a;
  *ptr_a = *ptr_b;
  *ptr_b = *ptr_temp;

  return;
}
