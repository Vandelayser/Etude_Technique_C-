#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout <<" ++ Construction point : " << x << " " << y << endl;
    }

    ~point(){}

    point(const point &p){
      cout << " :: Appel constructeur de recopie " << endl;
      x=p.x;
      y=p.y;
    }

    operator int() const{
      cout << " == Appel int() pour le point : " << x << " " << y << endl;
      return x;
    }
  private :

    int x;
    int y;

};
// FUNCTION PROTOTYPES

void fct(int n);

// MAIN

int main(int argc, char* argv[]){

  point a(3,4);
  fct(6);
  fct(a);

  return EXIT_SUCCESS;
}
// FUNCTION DECLARATIONS

void fct(int n){
  cout << " ** Appel fct avec argument : " << n << endl;
}
