#include <iostream>

using namespace std;

int main(void){

  int n;

  cout << "Donnez un entier entre 0 et 3 : ";
  cin >> n;

  switch(n){

    case (0) : cout << "ZERO" << endl;
    break;

    case (1) : cout << "UN" << endl;
    break;

    case (2) : cout << "DEUX" << endl;
    break;

    case (3) : cout << "TROIS" << endl;
    break;

    default : cout << "VOUS AVEZ DONNEZ UN AUTRES ENTIERS" << endl;
  }
  cout << "FIN DE PROGRAMME";

  return EXIT_SUCCESS;
}
