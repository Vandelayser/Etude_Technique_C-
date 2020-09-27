#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord) {
      cout << " ++ Construction point " << x << " " << y << endl;
    }

    ~point(){
      cout << " ++ Destruction point " << x << " " << y << endl;
    }

    void affiche(){
      cout << " Coordonnée : " << x << " " << y << endl;
    }

    friend point operator + (point a, point b);

  private :

    int x;
    int y;
};

// FUNCTION PROTOTYPES

point operator + (point a, point b);

// MAIN

int main(int argc, char* argv[]){

  point a;
  point b(9,4);

  a = b + 5; a.affiche();
  a = 2 + b; a.affiche();
  a = a + b; a.affiche();

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

point operator + (point a, point b){

  point r;

  r.x = a.x + b.x;
  r.y = a.y + b.y;

  return r;
}
