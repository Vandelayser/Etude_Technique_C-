#include <iostream>

using namespace std;

// CLASS PROTOTYPES

class complexe;
class point;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    operator complexe();

  private :

    int x;
    int y;
};

class complexe {

  public :

    complexe(double r = 0, double i = 0) : reel(r), imag(i){}

    friend point::operator complexe();

    void affiche() const{
      cout << reel << " + " << imag << "i" << endl;
    }
  private :

    double reel;
    double imag;
};
// METHODE DECLARATION

point::operator complexe(){

  complexe r;
  r.reel = x;
  r.imag = y;

  cout << " cast " << x << " " << y << " en " << r.reel << " + " << r.imag << "i" << endl;

  return r;
}
// MAIN

int main(int argc, char* arv[]){

  point a(2,5);
  point b(9,12);
  complexe c;

  c = complexe(a);
  c.affiche();

  c = b;
  c.affiche();

  return EXIT_SUCCESS;
}
