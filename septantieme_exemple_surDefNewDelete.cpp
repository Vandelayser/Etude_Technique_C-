#include <iostream>
#include <cstddef>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      npt++;
      cout << "++ Creation    : " << x << " " << y << " - " << npt_dyn << " point dyn "
           << " sur un total de " << npt << endl;
    }

    ~point(){
      npt--;
      cout << "-- Destruction : " << x << " " << y << " - " << npt_dyn << " point dyn "
           << " sur un total de " << npt << endl;
    }

    void* operator new(size_t sz){
      cout << "** Allocation  dynamique - il y a : " << npt_dyn << " points dyn " << endl;
      return ::new char[sz];
    }

    void operator delete(void* dp){
      cout << "## Destruction dynamique - il y a : " << npt_dyn << " points dyn " << endl;
      return ::delete(dp);
    }

  private :

    static int npt;
    static int npt_dyn;
    int x;
    int y;
};
// STATIC MEMBERS INITIALIZATION

int point::npt = 0;
int point::npt_dyn = 0;

// MAIN

int main(int argc, char* argv[]){

  point *ad1;
  point *ad2;
  point a(1,5);
  point b;
  point c(2);
  ad1 = new point (2,3);
  ad2 = new point (3,0);
  delete ad1;
  delete ad2;
  unique_ptr<point> up = make_unique<point> (4,9);

  return EXIT_SUCCESS;
}
