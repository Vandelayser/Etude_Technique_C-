#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){

    }

    ~point(){}

    point & operator = (const point & p){
      x = p.x;
      y = p.y;
      return *this;
    }

    point & operator = (const int i){
      x = i;
      y = 0;
      return *this;
    }

  private :

    int x;
    int y;
};
// MAIN

int main(int argc, char* argv[]){

  point a(3,4);
  a = 12;

  return EXIT_SUCCESS;
}
