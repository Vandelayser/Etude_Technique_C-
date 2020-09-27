#include <iostream>
#include <vector>

using namespace std;

// FONCTION PROTOTYPES

void f(vector<int> v1);

// MAIN

int main(void){

  vector<int> v1 = {0,1,2};

  cout << "--EN A         : v1 = ";
  for(auto e : v1){
    cout << e << " ";
  }
  cout << endl;

  f(v1);

  cout << "--EN B         : v1 = ";
  for(auto e : v1){
    cout << e << " ";
  }
  cout << endl;

  return EXIT_SUCCESS;
}
// FUNCTION DECLARATIONS

void f(vector<int> v1){

  cout << "--En I dans f  : v1 = ";

  for(auto e : v1){
  cout << e << " ";
  }
  cout << endl;

  for(auto &e : v1){
    e++;
  }

  cout << "--En II dans f : v1 = ";
  for(auto e : v1){
    cout << e << " ";
  }
  cout << endl;

  return;
}
