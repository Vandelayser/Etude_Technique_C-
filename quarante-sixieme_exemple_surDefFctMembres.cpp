#include <iostream>

using namespace std;

// CLASS DECLARIATIONS

class point{

  public:

    point();
    point(int coords);
    point(int abs, int ord);
    void affiche();
    void affiche(string str);

  private:
    int x;
    int y;
};

// STATIC MEMBERS DEFINITIONS
    //nihil

// METHODE DECLARATIONS

  point::point() : x(0), y(0){}
  point::point(int coords) : x(coords), y(coords){}
  point::point(int abs, int ord) : x(abs), y(ord){}

  void point::affiche(){

    cout << "Je suis en " << x << " et " << y << endl;

    return;
  }

  void point::affiche(string str){

    cout << str;
    affiche();

    return;
  }
// FUNCTION PROTOTYPES
    //nihil

// MAIN
int main (int argc, char* argv[]){

  point a;
  point b(5);
  point c(3,12);

  a.affiche();
  b.affiche("--Point b :");
  c.affiche("--Point c :");

  return EXIT_SUCCESS;
}
// FUNCTION DECLARATIONS
    //nihil
