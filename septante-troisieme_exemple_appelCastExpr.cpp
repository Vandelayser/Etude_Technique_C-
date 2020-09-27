#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << " ++ Construction point : " << x << " " << y << endl;
    }

    ~point(){}

    operator int() const{
      cout << " == Appel int() pour point " << x << " " << y << endl;
      return x;
    }

  private :

  int x;
  int y;
};

// MAIN

int main(int argc, char* argv[]){

  int n1;
  int n2;
  double z1;
  double z2;
  point a(3,4);
  point b(5,7);

  n1 = a + 3; cout << " n1 = " << n1 << endl;
  n2 = a + b; cout << " n2 = " << n2 << endl;
  z1 = a + 3; cout << " z1 = " << z1 << endl;
  z2 = a + b; cout << " z2 = " << z2 << endl;

  return EXIT_SUCCESS;
}
