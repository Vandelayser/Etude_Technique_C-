#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void affiche(double (*f) (double a), double debut, double fin, int nb);

// MAIN

int main(void){

  affiche([](double x) -> double { return x*x;}, 0., 1., 5);
  affiche([](double x) -> double { double y = (3*x*x) - (3*x) -2; if(y < 0){ y = -y+2; return y;} return y;}, 0., 2., 6);

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

void affiche(double (*f)(double a), double debut, double fin, int nb){

  int i;
  double x;
  double pas;

  if(nb < 2 ){
    nb = 2;
  }

  x = debut;
  pas = (fin-debut)/(nb-1);

  for(i = 0; i < nb; i++){

    cout << (*f)(x) << " ";
    x += pas;
  }

  cout << endl;
}
