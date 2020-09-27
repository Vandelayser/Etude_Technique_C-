#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void f(initializer_list<float> val);

// MAIN

int main(void){

  f({2.5, 3.5});
  f({});
  f({1.25, 5, 9, 3.40, 7});

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void f(initializer_list<float> val){

  cout << val.size() << " Valeurs : ";
  for(float v : val){
    cout << v << " ";
  }
  cout << endl;

  return;
}
