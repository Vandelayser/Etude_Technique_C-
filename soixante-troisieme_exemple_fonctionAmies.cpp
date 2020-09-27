#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point{

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){}

    ~point(){}

    friend bool coincide(const point & a, const point & p);

  private :

    int x;
    int y;
};

// FUNCTION PROTOTYPES

bool coincide(const point & a, const point & p);

// MAIN

int main(int argc, char* argv[]){

  point a(1,0);
  point b(1);
  point c;

  if(coincide(a,b)){
    cout << " a coincide avec b " << endl;
  }
  else{
    cout << " a ne coincide pas avec b " << endl;
  }

  if(coincide(a,c)){
    cout << " a coincide avec c " << endl;
  }
  else{
    cout << " a ne coincide pas avec c " << endl;
  }

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

bool coincide(const point & a, const point & p){
  return ((a.x == p.x) && (a.y == p.y));
}
