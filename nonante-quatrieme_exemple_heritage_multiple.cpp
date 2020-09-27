#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  private :

    int x;
    int y;

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << "** Construction d'un objet point" << endl;
    }
    ~point(){cout << "** Destruction d'un objet point" << endl;}
    void affiche() const;

};

void point::affiche() const{
  cout << "## Point x : " << x << " | Point y : " << y << endl;
  return;
}

class couleur{

  private :

    short color;

  public :

    couleur(short c = 0) : color(c){cout << "** Construction d'un objet couleur" << endl;}
    ~couleur(){cout << "** Destruction d'un objet couleur" << endl;}
    void affiche() const;
};

void couleur::affiche() const{
  cout << "## Couleur : " << color << endl;
  return;
}

class pointCouleur : public point, public couleur{

  private :

  public :

    pointCouleur(int abs = 0, int ord = 0, short c = 0) : point(abs,ord), couleur(c){
      cout << "** Construction d'un objet pointCouleur" << endl;
    }
    ~pointCouleur(){cout << "** Destruction d'un objet pointCouleur" << endl;}
    void affiche() const;
};

void pointCouleur::affiche() const{
  point::affiche();
  couleur::affiche();
  return;
}

// MAIN

int main(int argc, char** argv){

  point p(5,10);
  couleur c(16);
  pointCouleur pc(5,10,16);

  p.affiche();
  c.affiche();
  pc.affiche();

  return EXIT_SUCCESS;
}
