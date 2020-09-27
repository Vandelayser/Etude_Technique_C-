#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << " ++ Constructor : " << this << endl;
    }

    ~point(){
      cout << " -- Destructor  : " << this << endl;
    }

  private :

    int x;
    int y;
};

// MAIN

int main(int argc, char* argv[]){

  point a;
  a = point(1,2);
  a = point(3,5);

  return EXIT_SUCCESS;
}
