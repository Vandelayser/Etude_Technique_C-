#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public:
    void initialise(int,int);
    void deplace(int,int);
    void affiche();

  private:
    int x;
    int y;
};

// METHOD DECLARIATIONS

void point::initialise(int abs, int ord){

  x = abs;
  y = ord;

  return;
}

void point::deplace(int dx, int dy){

  x += dx;
  y += dy;

  return;
}

void point::affiche(){

  cout << "--Je suis en " << x << " , " << y << endl;

  return;
}

// MAIN

int main(int argc, char* arv[]){

  point a, b;

  a.initialise(5, 2);
  a.affiche();
  a.deplace(-2, 4);
  a.affiche();
  b.initialise(1, -1);
  b.affiche();

  return EXIT_SUCCESS;
}
