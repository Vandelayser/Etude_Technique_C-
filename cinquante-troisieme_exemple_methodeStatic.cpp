#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class cpte_obj{
  public :

    cpte_obj();
    ~cpte_obj();
    static void compte();

  private :

    static int ctr;

};

// STATIC MEMBERS INIT

int cpte_obj::ctr = 0;

// METHODE DECLARATIONS

cpte_obj::cpte_obj(){
  ctr++;
  cout << "++ Construction : il y a maintenant : " << ctr << " objets" << endl;
}

cpte_obj::~cpte_obj(){
  ctr--;
  cout << "++ Destruction : il y a maintenant : " << ctr << " objets" << endl;
}

void cpte_obj::compte(){
    cout << "Il y a : " << ctr << " objets" << endl;
    return;
}

// FUNCTION PROTOTYPES

void fct();

// MAIN

int main(int argc, char* argv[]){

  cpte_obj::compte();
  cpte_obj a;
  cpte_obj::compte();
  fct();
  cpte_obj::compte();
  cpte_obj b;
  cpte_obj::compte();

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void fct(){

  cpte_obj u;
  cpte_obj v;

  return;
}
