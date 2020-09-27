#include <iostream>
#include <string>

using namespace std;

// FUNCTIONS TEMPLATES

template <typename t> t minimum(t a, t b){
  return a < b ? a : b;
}

// CLASS PROTOTYPES

class vect;

// CLASS DECLARATIONS ##############################################################################

class vect {

    private :

      int x,y;

    public :

      vect() : x(0), y(0){}
      vect(int i) : x(i), y(0){}
      vect(int i, int j) : x(i), y(j){}
      ~vect(){ cout << "## Destruction instance d'objet " << endl;}
      bool operator<(vect& a);
      void affiche();
};

bool vect::operator<(vect& a){

  return x+y < a.x+a.y;
}

void vect::affiche(){
  cout << "** X : " << x << " | " << "Y : " << y << endl;
}
// #################################################################################################
// MAIN

int main(int argc, char** argv){

  int a = 0 ;
  int b = 3;
  float af = 3.3f;
  float bf = 0.0f;
  string s = "monsieur";
  string t = "madame";
  vect v(5,1);
  vect w(6,4);
  vect c = minimum(v,w);

  cout << minimum(a,b) << endl;
  cout << minimum(af,bf) << endl;
  cout << minimum(s,t) << endl; // compare les chaine de caractère car muni de operator<()

  c.affiche();

  return EXIT_SUCCESS;
}
