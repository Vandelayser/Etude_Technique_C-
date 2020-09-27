#include <iostream>
#include <memory>

using namespace std;

// FUNCTIONS PROTOTYPES

unique_ptr<int> creation(int n);

// MAIN

int main(void){

{
  unique_ptr<int> up = creation(5);

  cout << " *up = " << *up << endl;

  up = creation(7);
  cout << " *up = " << *up << endl;

  up = creation(9);
  cout << " *up = " << *up << endl;

  up = unique_ptr<int> (new int(11));
  cout << " *up = " << *up << endl;

  up = make_unique<int> (13);
  cout << " *up = " << *up << endl;
}

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

unique_ptr<int> creation(int n){

  unique_ptr<int> upf = make_unique<int> (n);

  return upf;
}
