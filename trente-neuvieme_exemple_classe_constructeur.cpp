#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public:
    point(int abs, int ord);
    void deplace(int dx, int dy);
    void affiche();

  private:

    int x;
    int y;
};

// METHODE DECLARIATIONS

point::point(int abs, int ord){

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

int main(int argc, char* argv[]){

  point a(5,2);
  point b(1,-1);

  a.affiche();
  a.deplace(-2,4);
  a.affiche();
  b.affiche();

  return EXIT_SUCCESS;
}
