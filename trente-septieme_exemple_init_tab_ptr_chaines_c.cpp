#include <iostream>

using namespace std;

int main(void){

  int nb;
  char* jour[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

  cout << "Donnez une chiffre entier entre 1 et 7 : ";
  cin >> nb;

  cout << "Le jour numero " << nb << " est le : " << jour[nb-1] << endl;

  return EXIT_SUCCESS;
}
