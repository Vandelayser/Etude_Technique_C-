#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public:
    point() : x(0), y(0) {}
    point(int coords) : x(coords), y(coords) {}
    point(int abs, int ord) : x(abs), y(ord) {}
    void affiche(string str = "");
  private:
    int x;
    int y;
};

// METHODE DECLARATIONS

void point::affiche(string str){

  cout << str << " je suis en : " << x << " et " << y << endl;

  return;
}

// MAIN

int main(int argc, char* argv[]){

  point a;
  point b(5);
  point c(3,12);

  a.affiche();
  b.affiche("Point b :");
  c.affiche("Point c :");

  return EXIT_SUCCESS;
}
