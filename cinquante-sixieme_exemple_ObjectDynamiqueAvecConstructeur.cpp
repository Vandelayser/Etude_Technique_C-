#include <iostream>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}
    ~point(){}

    void deplace(int dx, int dy){
      x += dx;
      y += dy;
      return;
    }

    void affiche(){
      cout << " -- Je suis en : " << x << " " << y << endl;
      return;
    }

  private :

    int x;
    int y;
};

// MAIN

int main(int argc, char* argv[]){

  point *adp  = new point(1,2);
  point *adp2 = new point();

  unique_ptr<point> up  = make_unique<point>(2,5);
  unique_ptr<point> up2 = make_unique<point>();

  adp->affiche();
  adp->deplace(3,5);
  adp->affiche();

  adp2->affiche();

  delete(adp);
  delete(adp2);

  up->affiche();
  up->deplace(4,2);
  up->affiche();

  up2->affiche();

  return EXIT_SUCCESS;
}
