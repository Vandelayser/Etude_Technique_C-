#include <iostream>
#include <memory>

using namespace std;


// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    ~point(){}

    friend point operator + (point, point);

    void affiche() const{
      cout << " -- Coordonnée : " << x << " " << y << endl;
    }

  private :
    int x;
    int y;
};

// FUNCTION PROTOTYPES

point operator + (point a, point b);

// MAIN

int main(int argc, char* argv[]){

  point a(1,2);
  point b(2,5);
  point c;

  a.affiche();
  b.affiche();

  c = a+b;
  c.affiche();

  c = a+b+c;
  c.affiche();

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

point operator + (point a, point b){

  point p;

  p.x = a.x + b.x;
  p.y = a.y + b.y;

  return p;
}
