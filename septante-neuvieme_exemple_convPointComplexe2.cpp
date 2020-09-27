#include <iostream>

using namespace std;

// CLASS PROTOTYPES

class point;
class complexe;

// CLASS DECLARATIONS

class complexe {

  public :

    complexe(double r = 0, double i = 0) : reel(r), imag(i){}

    complexe(point p);

    void affiche(){
      cout << reel << " + " << imag << "i" << endl;
    }

  private :

    double reel;
    double imag;

};

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    friend complexe::complexe(point p);

  private :

    int x;
    int y;
};

// METHODE DECLARATIONS

complexe::complexe(point p){
  reel = p.x;
  imag = p.y;
}

// MAIN

int main(int argc, char* argv[]){

  point a(3,5);

  complexe c (a);
  c.affiche();

  return EXIT_SUCCESS;
}
