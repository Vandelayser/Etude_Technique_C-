#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << " ++ Const. Point  : " << x << " " << y << endl;
    }
    ~point(){}

  private :

    int x;
    int y;
};

class cercle{

  public :

    cercle(int abs_centre = 0, int ord_centre = 0, int r = 0) : centre(abs_centre, ord_centre), ray(r){
      cout << " ++ Const. Cercle : " << ray << endl;
    }
    ~cercle(){}

  private :

    point centre;
    int ray;
};

// MAIN

int main(int argc, char* argv[]){

  cercle(1,3,9);

  return EXIT_SUCCESS;
}
