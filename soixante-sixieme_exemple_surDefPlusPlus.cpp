#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    ~point(){}

    point operator ++(){
        x++;
        y++;
        return *this;
    }

    point operator ++(int i){

      point p = *this;
      x++;
      y++;
      return p;
    }

    void affiche() const {
      cout << x <<  " " << y << endl;
    }

  private :

    int x;
    int y;
};

// MAIN

int main(int agrc, char* argv[]){

  point a1 (2,5);
  point a2 (2,5);
  point b;

  b = ++a1;
  cout << "a1 : ";
  a1.affiche();
  cout << "b : ";
  b.affiche();

  b = a2++;
  cout << "a2 : ";
  a2.affiche();
  cout << "b : ";
  b.affiche();

  return EXIT_SUCCESS;
}
