#include <iostream>

using namespace std;

int main(void){

  char* adr = "GameOver";

  while(*adr){
    cout << *adr;
    adr++;
  }
  return EXIT_SUCCESS;
}
