#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class vect{

  public :

    vect(int n) : nelem(n), adr(new double[n]){
      cout << " ++ const. usuel - obj address : " << this << " - address du verct : " << adr << endl;
    }

    ~vect(){
      cout << " -- Destr. usuel - obj address : " << this << " - address du verct : " << adr << endl;
    }

    vect(const vect &v) : nelem(v.nelem), adr(new double[v.nelem]){
      int i;
      for(i = 0; i < v.nelem; i++){
        adr[i] = v.adr[i];
      }
      cout << " $$ Const. recop - obj address : " << this << " - address du verct : " << adr << endl;
    }

  private :

    int nelem;
    double* adr;
};
// FUNCTION PROTOTYPES

void fct(const vect v);

// MAIN

int main(int argc, char* argv[]){

  vect a(5);
  fct(a);

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void fct(const vect v){
  cout << " ## Appel. funct" << endl;
}
