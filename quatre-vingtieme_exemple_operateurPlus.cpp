#include <iostream>

using namespace std;

// CLASS PROTOTYPES

class point;
class complexe;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    operator complexe();

    void affiche(){
      cout << " Point : " << x << " " << y << endl;
    }

  private :

    int x;
    int y;
};

class complexe {

  public :

    complexe(double r = 0, double i = 0) : reel(r), imag(i){}

    void affiche(){
      cout << reel << " + " << imag << "i" << endl;
    }

    friend point::operator  complexe();

    friend complexe operator + (complexe a, complexe b);

  private :

    double reel;
    double imag;
};

// METHODE DECLARATIONS

point::operator complexe(){

  complexe c;

  c.reel = x;
  c.imag = y;

  return c;
}

complexe operator + (complexe a, complexe b){

  complexe c;

  c.reel = a.reel + b.reel;
  c.imag = a.imag + b.imag;

  return c;
}

// MAIN

int main(int argc, char* argv[]){

  point a(3,4);
  point b(7,9);
  point c;
  complexe x(3.5,2.8);
  complexe y;

  y = x + a; y.affiche();
  y = a + x; y.affiche();
  y = a + b; y.affiche();

  return EXIT_SUCCESS;
}
