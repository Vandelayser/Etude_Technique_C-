#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public:
    point (int abs, int ord);
    void deplace(int dx, int dy);
    void affiche();

  private:
    int x;
    int y;
};

// METHODE DECLARATIONS

point::point(int abs, int ord) : x(abs), y(ord){}

void point::deplace(int dx, int dy){
  x += dx;
  y += dy;

  return;
}

void point::affiche(){

  cout << "--Je suis en " << x << " et " << y << endl;

  return;
}

// FUNCTION DECLARATIONS

void f(point *p){
  p->affiche();
  p->deplace(1,4);
  p->affiche();

  return;
}
// MAIN

int main(int argc, char* argv[]){

  point a(1,3);

  f(&a);
  a.affiche();

  return EXIT_SUCCESS;
}
