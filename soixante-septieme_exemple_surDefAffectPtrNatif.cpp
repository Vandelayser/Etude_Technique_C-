#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class vect {

  public :

    vect(int n) : nelem(n), adr(new double [n]){
      int i;

      for(i = 0; i < n; i ++){
        adr[i] = 0;
      }
      cout << "++ Obj taille : " << nelem << " en " << this  << " v.dyn en = " << adr << endl;
    }

    ~vect(){
      cout << "++ Obj taille : " << nelem << " en " << this  << " v.dyn en = " << adr << endl;
      delete[] adr;
    }

    vect & operator = (const vect & v);

  private :

    int nelem;
    double *adr;
};

// METHODE DECLARATIONS

  vect & vect::operator = (const vect & v){

    cout << "== Appel operateur = avec addresses : " << this << " " << &v << endl;

    if(this != &v){
      cout << " Effacement du vecteur dynamique en " << adr << endl;
      delete []adr;

      adr = new double [nelem = v.nelem];
      cout << " Nouveau vecteur dynamique en       " << adr << endl;

      for (int i = 0; i < nelem; i++){
        adr[i] = v.adr[i];
      }
    }

    else{
      cout << " On fait rien " << endl;
    }

    return *this;
  }

// MAIN

int main(int argc, char *argv[]){

  vect a(5);
  vect b(3);
  vect c(4);

  a = b;
  cout << "** affectation a=b " << endl;

  c = c;
  cout << "** affectation c=c " << endl;

  a = b = c;
  cout << "** affectation a=b=c " << endl;

  return EXIT_SUCCESS;
}
