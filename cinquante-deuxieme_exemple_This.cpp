#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :
    point(int abs = 0, int ord = 0) : x(abs), y(ord){}
    void affiche();

  private :
    int x;
    int y;

};

// METHODE DECLARATIONS

void point::affiche(){
  cout << "Adresse : " << this << " - Coordonnées : x = " << x << " , y = " << y << endl;
  return;
}
// MAIN

int main(int argc, char* argv[]){

  point a;
  point b(5);
  point c(3,15);

  a.affiche();
  b.affiche();
  c.affiche();

  return EXIT_SUCCESS;
}
