#include <iostream>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    void initialise(int abs, int ord){
      x = abs;
      y = ord;
      return;
    }

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

  point *adp = new point;
  unique_ptr<point> up = make_unique<point>();

  adp->initialise(1,2);
  adp->affiche();
  adp->deplace(3,5);
  adp->affiche();

  delete(adp);
  
  up->initialise(2,5);
  up->affiche();
  up->deplace(4,2);
  up->affiche();

  return EXIT_SUCCESS;
}
