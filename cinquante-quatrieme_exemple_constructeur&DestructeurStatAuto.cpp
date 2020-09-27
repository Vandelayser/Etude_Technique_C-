#include <iostream>

using namespace std;

// CLASS DECLARATION

class point {

  public :

    point(int abs, int ord) : x(abs), y(ord){
      cout << " ++ Construction d'un point : " << x << " " << y << " -> Address " << this << endl;
    }

    ~point(){
      cout << " -- Destruction d'un point : " << x << " " << y << " -> Address " << this << endl;
    }

  private :

    int x;
    int y;

};

// OBJET STATIC

point a(1,1);

// MAIN

int main(int argc, char* argv[]){

  cout << " DEBUT DU MAIN " << endl;

  point b(4,9);
  int i;

  for(i = 1; i <= 3; i++){
    cout << " For tour numero : " << i << endl;
    point c(i,2*i);
  }

  cout << " FIN DU MAIN " << endl;

}
