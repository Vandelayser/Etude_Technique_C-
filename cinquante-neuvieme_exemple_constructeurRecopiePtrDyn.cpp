#include <iostream>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class vect{

  public :

    vect(int n) : nelem(n), adr(make_unique<double[]>(n)){
      cout << " ++ const. usuel - obj address : " << this << " - address du verct : " << adr.get() << endl;
    }

    ~vect(){
      cout << " -- Destr. usuel - obj address : " << this << " - address du verct : " << adr.get() << endl;
    }

    vect(const vect &v) : nelem(v.nelem), adr(make_unique<double[]>(v.nelem)){
      int i;
      for(i = 0; i < v.nelem; i++){
        adr[i] = v.adr[i];
      }
      cout << " $$ Const. recop - obj address : " << this << " - address du verct : " << adr.get() << endl;
    }

  private :

    int nelem;
    unique_ptr<double[]> adr;
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
