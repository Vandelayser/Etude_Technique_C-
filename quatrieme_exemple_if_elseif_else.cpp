#include <iostream>

//#define CONSTANTE_K = 1.0;
//#define TAUX_TVA 21.0;
//#define DIVISEUR 100.0;
//#define PALIER_1 1000.0;
//#define PALIER_2 2000.0;
//#define PALIER_3 5000.0;
//#define PERC_RED_1 0.0;
//#define PERC_RED_2 1.0;
//#define PERC_RED_3 3.0;
//#define PERC_RED_4 5.0;

using namespace std;

int main(void){

  constexpr double CONSTANTE_K = 1.0;
  constexpr double TAUX_TVA = 21.0;
  constexpr double DIVISEUR = 100.0;
  constexpr double PALIER_1 = 1000.0;
  constexpr double PALIER_2 = 2000.0;
  constexpr double PALIER_3 = 5000.0;
  constexpr double PERC_RED_1 = 0.0;
  constexpr double PERC_RED_2 = 1.0;
  constexpr double PERC_RED_3 = 3.0;
  constexpr double PERC_RED_4 = 5.0;

  double ht;
  double ttc;
  double tauxr;
  double remise;
  double net;

  cout << "Donnez le prix hors taxes : ";
  cin >> ht;
  ttc = ht * (CONSTANTE_K + TAUX_TVA / DIVISEUR);

  if(ttc < PALIER_1){
    tauxr = PERC_RED_1;
  }
  else if(ttc < PALIER_2){
    tauxr = PERC_RED_2;
  }
  else if(ttc < PALIER_3){
    tauxr = PERC_RED_3;
  }
  else{
    tauxr = PERC_RED_4;
  }

  remise = ttc * tauxr / DIVISEUR;
  net = ttc - remise;

  cout << "Prix TTC = " << ttc << endl;
  cout << "Remise = " << remise << endl;
  cout << "Net a payer = " << net << endl;

  return EXIT_SUCCESS;
}
