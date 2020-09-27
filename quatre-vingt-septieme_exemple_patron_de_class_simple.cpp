#include <iostream>

using namespace std;

// CLASS TEMPLATES

/* Nous allons créer un template permettant la creation d'un tableau dynamique avec les éléments
  de n'importe quels types de bases ou n'importe quels objets*/

template <typename T, int nb> class tableau {

  private :

    T* tab; // ICI T fais référence au type générique

  public :

    // CONSTRUCTEUR AVEC ALLOCATION DYNAMIQUE DE LA MEMOIRE DU TABLEAU
    tableau(){tab = new T[nb];}
    // DESTRUCTEUR AVEC LIBERATION DE LA MEMOIRE ALLOUEE
    ~tableau(){delete[] tab;cout << "Mémoire allouées au tableau libérée" << endl;}
    // SURCHAGE D OPERATEUR PERMETTANT D ACCEDER AUX ELEMENTS DU TABLEAU AVEC L INDEXATION
    T& operator[](const int &j){return tab[j];}

};


// CLASS DECLARATION ###############################################################################
// UNE SIMPLE CLASSE POINT 2D POUR DEMONTRER QUE NOTRE TABLEAU SUPPORTE LES OBJETS
class point{

  private :

    int x;
    int y;

  public :

    // CONSTRUCTEUR AVEC UN INITIALISEUR
    point(int abs = 0, int ord = 0) : x(abs), y(ord){}
    // DESTRUCTEUR POUR SIGNALER TEXTUELLEMENT LA DESTRUCTION DE L OBJET
    ~point(){cout << "Destruction du point" << endl;}
    void affiche(){cout << x << " : " << y << endl;}
    void setX(int i){x = i;}; // SETTEUR DE LA VARIABLE PRIVEE X
    void setY(int i){y = i;}; // SETTEUR DE LA VARIABLE PRIVEE Y
};

//MAIN #############################################################################################

int main(int arfc,  char** argv){

  constexpr int nb = 4;
  tableau<int,nb> ti;
  tableau<point,nb> tp;

  for(int i = 0; i < nb; i++){
    ti[i] = i;
  }

  for(int i = 0; i < nb; i++){
      tp[i].setX(i);
      tp[i].setY(-i);
  }

  for(int i = 0; i < nb; i++){
    cout << ti[i] << endl;
  }

  for(int i = 0; i < nb; i++){
    tp[i].affiche();
  }

  return EXIT_SUCCESS;
}
