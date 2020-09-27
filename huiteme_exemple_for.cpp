#include <iostream>

using namespace std;

int main(void){

  int a;
  int b;

  for(a=0, b=20; a!=b; a++, b-- ){
    cout << a << " =? " << b << endl;
  }
  cout << a << " = " << b << endl;
  cout << "FIN DE PROGRAMME";

  return EXIT_SUCCESS;
}
