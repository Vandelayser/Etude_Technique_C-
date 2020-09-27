#include <iostream>

using namespace std;

int main(void){

  char nom[20];
  char prenom[20];
  char ville[20];

  cout << "--Nom    : "; cin >> nom;
  cout << "--Prenom : "; cin >> prenom;
  cout << "--Ville  : "; cin >> ville;

  cout << endl;

  cout << "--Nom    : " << nom << endl;
  cout << "--Prenom : " << prenom << endl;
  cout << "--Ville  : " << ville << endl;

  return EXIT_SUCCESS;
}
