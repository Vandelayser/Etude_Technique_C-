#include <iostream>

//#define LIMIT 100;

using namespace std;

int main(void){

  int n;
  int som = 0;
  constexpr int LIMIT = 100;

  while(som <= LIMIT){
    cout << "Donnez un nombre entre 0 et 100 pour l'additionner au précédent : ";
    cin >> n;
    som += n;
    cout << "Vous avez obtenu : " << som << endl;
  }
  cout << "Vous avez depassé: " << LIMIT << endl;

  return EXIT_SUCCESS;
}
