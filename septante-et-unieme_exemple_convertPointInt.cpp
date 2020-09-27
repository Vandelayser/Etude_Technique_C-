#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point {

    public :

      point(int abs = 0, int ord = 0) : x(abs), y(ord){
        cout << " ++ Construction de point  : " << x << " " << y << endl;
      }

      ~point(){};

      operator int() const {
        cout << " == Appel int() pour point : " << x << " " << y << endl;
        return x;
      }

    private :

      int x;
      int y;
};

// MAIN

int main(int argc, char* argv[]){

  point a(3,4);
  point b(5,7);
  int n1;
  int n2;

  n1 = int(a);
  cout << " n1 = " << n1 << endl;

  n2 = b;
  cout << " n2 = " << n2 << endl;

  return EXIT_SUCCESS;
}
