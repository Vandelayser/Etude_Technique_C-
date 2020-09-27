#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void affiche(double (*f) (double a), double debut, double fin, int nb);
double f1(double x);
double f2(double x);

// MAIN

int main(void){

  affiche(f1, 0., 1., 5);
  affiche(f2, 0., 2., 6);

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

double f1(double x){

  return x*x;
}

double f2(double x){

  double y = (3*x*x) - (3*x) -2;

  if(y < 0){
    y = -y+2;
    return y;
  }

  return y;
}
