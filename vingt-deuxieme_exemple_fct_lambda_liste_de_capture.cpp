#include <iostream>

using namespace std;

int main(void){

  int n = 5;
  auto f1 = [n]() {cout << " Valeur de f1 " << n << endl;};
  auto f2 = [&n]() {cout << " Valeur de f2 " << n << endl;};

  f1();
  f2();
  n = 20;
  f1();
  f2();

  return EXIT_SUCCESS;
}
