#include <iostream>

using namespace std;

int main(void){

  const int nb = 6;

  int notes[nb];
  float sum = 0;
  float avg = 0;
  int nbm = 0;
  int i;

  for(i = 0; i<nb; i++){
    cout <<  " Donnez la note numéro " << i << " : ";
    cin >> notes[i];
  }
  cout << endl;

  for(i = 0; i<nb; i++){
    sum += notes[i];
  }

  avg = sum / nb;

  cout << " La moyenne de la classe est de : " << avg << endl;

  for(i = 0; i<nb; i++){
    if(notes[i] <= avg){
      nbm++;
    }
  }

  cout << " Le nombre d'eleves au dessus de la moyenne est de : " << nbm << endl;

  return EXIT_SUCCESS;
}
