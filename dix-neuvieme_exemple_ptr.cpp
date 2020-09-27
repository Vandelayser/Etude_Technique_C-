#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES
  //nihil

// MAIN

int main(void){

  int rep;
  int i;

  int n = 10;
  int p = 5;

  int *ptr_1 = nullptr;
  int *ptr_2 = nullptr;

  for(i = 0; i < 3; i++){

    cout << " Donnez un nombre entier ";
    cin >> rep;

    if(rep%2 == 0){
      ptr_1 = &n;
      ptr_2 = &p;
    }
    else{
      ptr_1 = &p;
      ptr_2 = &n;
    }

    cout << "-- En I : valeurs pointees par ptr_1 et ptr_2 = " << *ptr_1 << " " << *ptr_2 << endl;

    *ptr_1 = *ptr_1 + rep;
    *ptr_2 = *ptr_2 - rep;

    cout << "-- En II : valeurs pointees par ptr_1 et ptr_2 = " << *ptr_1 << " " << *ptr_2 << endl;
    cout << "-- En II : valeur de n = " << n << " | valeur de p = " << p << endl;
  }

  return EXIT_SUCCESS;
}
// FUNCTIONS DECLARATIONS
  //nihil
