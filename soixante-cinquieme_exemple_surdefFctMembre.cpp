#include <iostream>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    ~point(){}

    point operator + (point a) const;

    void affiche() const;

  private :

    int x;
    int y;

};
// METHODE DECLARATIONS

point point::operator + (point a) const{

  point p;

  p.x = x + a.x;
  p.y = y + a.y;

  return p;
}

void point::affiche() const{
  cout << " -- coordonnee : " << x << " " << y << endl;
}

// MAIN

int main(int argc, char* argv[]){

  point a(1,2);
  point b(2,5);
  point c;
  unique_ptr<point> p = make_unique<point> (1,2);


  a.affiche();
  b.affiche();

  c = a+b;
  c.affiche();

  c = a+b+c;
  c.affiche();

  return EXIT_SUCCESS;
}
