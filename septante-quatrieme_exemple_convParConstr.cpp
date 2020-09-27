#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << " ++ Construction du point : " << x << " " << y << " en " << this << endl;
    }

    ~point(){
      cout << " -- Destruction du point  : " << x << " " << y << " en " << this << endl;
    }

    point(const point & p){
      x = p.x;
      y = p.y;
      cout <<" :: Constr.recopie point  : " << &p << " en " << this << endl;
    }

  private :

    int x;
    int y;
};

// FUNCTION PROTOTYPES

void fct(point p);

// MAIN

int main(int argc, char* argv[]){

  point a(3,4);
  a = point(12);
  fct(4);

  return EXIT_SUCCESS;
}
// FUNCTION DECLARATIONS

void fct(point p){
  cout << " ** Appel fct " << endl;
}
