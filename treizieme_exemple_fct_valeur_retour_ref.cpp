#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

int & alterne(int &n1, int &n2);

// MAIN

int main(void){

  int n=1, p=3, q=5;

  alterne(n,p) = 0;
  cout << " N = " << n << " P = " << p << endl;

  alterne(p,q) = 12;
  cout << " P = " << p << " Q = " << q << endl;

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS
int & alterne(int &n1, int &n2){

  static bool indic = true;

  if(indic){
    indic = false;
    return n1;
  }

  else{
    indic = true;
    return n2;
  }
}
