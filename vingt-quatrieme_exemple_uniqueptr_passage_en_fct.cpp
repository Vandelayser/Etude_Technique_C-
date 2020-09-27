#include <iostream>
#include <memory>

using namespace std;

// FUNCTIONS PROTOTYPES

void f(unique_ptr<int> upf);

// MAIN

int main(void){

  {
  unique_ptr<int> up1 = make_unique<int> (24);

  cout << "-- En 1 -- up1 = " << up1.get() << *up1 << endl;
  f(move(up1));
  cout << "-- En 2 -- up1 = " << up1.get() << endl;
  }

  return EXIT_SUCCESS;
}
// FUNCTIONS DECLARATIONS

void f(unique_ptr<int> upf){

  cout << "-- Dans la fonction f -- upf = " << upf.get() << *upf << endl;
  return;
}
