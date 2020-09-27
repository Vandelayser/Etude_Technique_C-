#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class cpte_obj{

  public :
    cpte_obj();
    ~cpte_obj();

  private :

    static int ctr;
};

// STATIC CLASS VARIABLE INITIALISATION

int cpte_obj::ctr = 0;

// METHODE DECLARATIONS

cpte_obj::cpte_obj(){

  ctr++;
  cout << "++Constrution : il y a maintenant : " << ctr << " objets " << endl;
}

cpte_obj::~cpte_obj(){

  ctr--;
  cout << "--Construction : il y a maintenant : " << ctr << " objets" << endl;
}

// FUNCTION PROTOTYPES

void f();

// MAIN

int main(int argc, char* argv[]){
  
  cpte_obj a;
  f();
  cpte_obj b;

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void f(){
  cpte_obj f_a;
  cpte_obj f_b;

  return;
}
