#include <iostream>

using namespace std;

int main(void){

  int n;

  do{
    cout << "Donnez un nombre > 0 : ";
    cin >> n;
    cout << "Vous avez fourni le nombre : " << n << endl;
  } while (n <= 0);

  cout << "Réponse correcte" << endl;
  cout << "FIN DE PROGRAMME";

  return EXIT_SUCCESS;
}
