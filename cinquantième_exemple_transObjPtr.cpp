#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :
    point(int abs = 0, int ord = 0) : x(abs), y(ord){};
    bool coincide(point *pt);

  private :

    int x;
    int y;
};

// METHODE DECLARATIONS

bool point::coincide(point *pt){
    return ((pt->x == x) && ( pt->y == y));
}

// MAIN

int main(int argc, char* argv[]){

  point a;
  point b(1);
  point c(1,0);

  cout << " a et b : " << a.coincide(&b) << " ou " << b.coincide(&a) << endl;
  cout << " b et c : " << b.coincide(&c) << " ou " << c.coincide(&b) << endl;

  return EXIT_SUCCESS;
}
