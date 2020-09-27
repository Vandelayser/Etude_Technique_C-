#include <iostream>

using namespace std;

// CLASS TEMPLATES

template <typename T> class point{

  private :

    T x;
    T y;

  public :

    point(T abs = 0, T ord = 0) : x(abs), y(ord){}                        // CONSTRUCTEUR
    point(const point &p);                                                // CONSTRUCTEUR DE RECOPIE
    ~point(){cout << "** Destruction de l'objet instancié **" << endl;}   // DESTRUCTEUR
    point<T> operator+(const point &p);
    void affiche();
};

template <typename T> point<T>::point(const point &p){
  x = p.x;
  y = p.y;
}

template <typename T> point<T> point<T>::operator+(const point &p){

  point<T> a;

  a.x = x + p.x;
  a.y = y + p.y;

  return a;
}

template <typename T> void point<T>::affiche(){
  cout << "** Coordonnée x : " << x << endl;
  cout << "** Coordonnée y : " << y << endl;
  return;
}

template <> void point<char>::affiche(){
  cout << "** Coordonnée x : " << (int)x << endl;
  cout << "** Coordonnée y : " << (int)y << endl;
  return;
}

int main(int argc, char** argv){

  point<int> a;
  point<double> b(5.0,10.0);
  point<float> c(5.0f,15.0f);
  point<char> d('A','B');
  point<double> f = b;
  point <double> g;

  g = f + b;

  a.affiche();
  b.affiche();
  c.affiche();
  d.affiche();
  f.affiche();
  g.affiche();

  return EXIT_SUCCESS;
}
