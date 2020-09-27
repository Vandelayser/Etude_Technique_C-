#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class vect{

  public :

    vect(int n) : nelem(n), adr(new double[n]){
      cout << "++ const.usuel - adr objet : " << this << "  - adr vecteur : " << adr << endl;
    }

    ~vect(){
      cout << "++ dest.usuel - adr objet : " << this << "  - adr vecteur : " << adr << endl;
      delete(adr);
    }

  private :

    int nelem;
    double *adr;

};

// FUNCTION PROTOTYPES

void fct(vect v);

// MAIN

int main(int argc, char* argv[]){

    vect a(5);
    fct(a);

    return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void fct(vect v){
  cout << "** Appel de la fonction fct(vect)" << endl;
}
