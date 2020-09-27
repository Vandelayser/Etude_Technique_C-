#include <iostream>

using namespace std;

// CLASS DECLARATION

class point{

  private :

    int x;
    int y;

  public :

    point(): x(0),y(0) {}
    point(int abs, int ord): x(abs), y(ord) {}
    ~point(){}
    virtual void affiche() const;
};

void point::affiche()const {
  cout << "## Point x : " << x << endl;
  cout << "## Point y : " << y << endl;
  return;
}

class pointCouleur : public point{

  private :

    short color;

  public :

    pointCouleur(): point(0,0), color(0){}
    pointCouleur(int abs, int ord, short s): point(abs,ord), color(s){}
    ~pointCouleur(){}
    virtual void affiche() const;
};

void pointCouleur::affiche() const{
  point::affiche();
  cout << "## Couleur : " << color << endl;
  return;
}

// MAIN

int main(int argc, char** argv){

  point p(5,10);
  pointCouleur pc(6,11,16);

  point* ptr_p = &pc;

  p.affiche();
  pc.affiche();
  ptr_p->affiche();

  return EXIT_SUCCESS;
}
