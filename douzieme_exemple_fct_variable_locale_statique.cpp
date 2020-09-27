#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void decompte(int count);

// MAIN

int main(void){

  const int LIMIT = 0;
  int count = 20;
  int i;

  for(i = 10; i > LIMIT; i--){
    decompte(count);
  }

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

void decompte(int count){

  static int i = count;
  cout << i << endl;
  i--;

}
