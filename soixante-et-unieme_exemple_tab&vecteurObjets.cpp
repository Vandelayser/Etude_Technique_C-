#include <iostream>
#include <vector>

using namespace std;

//CLASS DECLARATION

class point {

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << " ++ Constructor Call : " << x << " " << y << endl;
    }
    ~point(){
      cout << " -- Destructor  Call " << endl;
    }
    point(const point & p) : x(p.x), y(p.y){
      cout << " $$ ConstruCopy Call : " << x << " " << y << endl;
    }

  private :
    int x;
    int y;
};

// MAIN

int main(int argc, char* argv[]){

  point p1(1,2);
  point curve1[3] {{1,1}, 2, {3,3}};
  point curve2[2] {p1,{5,5}};
  vector<point> curve3 {p1,{2,2},{3,3}};

  return EXIT_SUCCESS;
}
