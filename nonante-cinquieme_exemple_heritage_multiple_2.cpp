#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  private :

    int x;
    int y;

  public :

    point() : x(0), y(0){}
    point(int abs, int ord) : x(abs), y(ord){}
    ~point(){}
    void affiche() const;
};

void point::affiche() const{
  cout << "## Point x : " << x << endl;
  cout << "## Point y : " << y << endl;
  return;
}
//##################################################################################################

class couleur{

  private :

    short color;

  public :

    couleur(): color(0){}
    couleur(short c) : color(c){}
    ~couleur(){};
    void affiche() const;
};

void couleur::affiche() const{
  cout << "## Couleur : " << color << endl;
  return;
}
//##################################################################################################

class masse{

  private :

    float mass;

  public :

    masse(): mass(0.0f){}
    masse(float m): mass(m){}
    ~masse(){}
    void affiche() const;
};

void masse::affiche() const{
  cout << "## Masse   : " << mass << endl;
  return;
}
//##################################################################################################

class pointCouleur : public virtual point, public virtual couleur{

  public :

    pointCouleur(): point(0,0), couleur(0){}
    pointCouleur(int abs, int ord, short c): point(abs,ord), couleur(c){}
    ~pointCouleur(){}
    void affiche() const;
};

void pointCouleur::affiche() const{
  point::affiche();
  couleur::affiche();
  return;
}
//##################################################################################################

class pointMasse : public virtual point, public virtual masse{

  public :

    pointMasse(): point(0,0), masse(0.0f){}
    pointMasse(int abs, int ord, float m): point(abs,ord), masse(m){}
    ~pointMasse(){}
    void affiche() const;
};

void pointMasse::affiche() const{
  point::affiche();
  masse::affiche();
  return;
}
//##################################################################################################

class pointCouleurMasse : public pointCouleur, public pointMasse{

  public :

    pointCouleurMasse(): point(0,0), couleur(0), masse(0.0f){}
    pointCouleurMasse(int abs, int ord, short c, float m): point(abs, ord), couleur(c), masse(m){}
    ~pointCouleurMasse(){}
    void affiche() const;
};

void pointCouleurMasse::affiche() const{
  point::affiche();
  couleur::affiche();
  masse::affiche();
  return;
}
//##################################################################################################

// MAIN

int main(int argc, char** argv){

  point             p(5,10);
  couleur           c(16);
  masse             m(10.0f);
  pointCouleur      pc(6,11,15);
  pointMasse        pm(7,12,13.0f);
  pointCouleurMasse pcm(8,13,14,12.0f);

  p.affiche();
  c.affiche();
  m.affiche();
  pc.affiche();
  pm.affiche();
  pcm.affiche();
  
  return EXIT_SUCCESS;
}
