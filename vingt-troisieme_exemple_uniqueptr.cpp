#include <iostream>
#include <memory>

using namespace std;

// FUNCTIONS PROTOTYPES

  //nihil

// MAIN

int main(void){

  {
  unique_ptr<int> up1 = make_unique<int> (12);
  unique_ptr<int> up2 = make_unique<int> (25);

  cout << "-- En 1 -- up1 : " << up1.get() << *up1 << endl;
  cout << "-- En 1 -- up2 : " << up2.get() << *up2 << endl;

  up1 = move(up2);

  cout << "-- En 2 -- up1 : " << up1.get() << *up1 << endl;
  cout << "-- En 2 -- up2 : " << up2.get() << endl;
  }

  return EXIT_SUCCESS;
}
// FUNCTIONS DECLARATIONS

  //nihil
