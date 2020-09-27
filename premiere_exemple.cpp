#include <iostream>
#include <cmath>
#define NFOIS 5

using namespace std;

int main(void){

  int i;
  float x;
  float racx;
  // const int NFOIS = 5;

  cout << "Bonjour\n";
  cout << "Je vais vous calculer " << NFOIS << " racines carree\n";

  for(i=0; i<NFOIS; i++){
    cout << "Donnez un nombre : ";
    cin >> x;
    if(x < 0.0){
      cout << "Le nombre " << x << " ne possède pas de racine carree\n";
    }
    else{
      racx = sqrt(x);
      cout << "Le nombre " << x << " a pour racine carree : " << racx << "\n";
    }
  }
  cout << "Terminaison du programme";
}
