#include <iostream>

using namespace std;

// CLASS DECLARATIONS

template <typename T> class point{

  private :

    T x;
    T y;

  public :

    point(T abs = 0, T ord = 0) : x(abs), y(ord){}
    ~point(){}
    void affiche() const;

};

template <typename T> void point<T>::affiche() const {
  cout << "** X : " << x << " | Y : " << y << endl;
  return;
}

class pointColor_1 : public point<int> {

  private :

    short color;

  public :

    pointColor_1(int abs = 0, int ord = 0, short col = 0) : point<int>(abs,ord), color(col){}
    ~pointColor_1(){}
    void affiche() const;
};

void pointColor_1::affiche() const{
  point<int>::affiche();
  cout << "** Couleur : " << color << endl;
  return;
}

template <typename T> class pointColor_2 : public point<T>{

  private :

    T color;

  public :

    pointColor_2(T abs = 0, T ord = 0, T col = 0): point<T>(abs,ord), color(col){}
    ~pointColor_2(){}
    void affiche() const;
};

template <typename T> void pointColor_2<T>::affiche() const{
  point<T>::affiche();
  cout << "** Couleur : " << color << endl;
  return;
}

template <typename T, typename U> class pointColor_3 : public point<T>{

  private :

    U color;

  public :

    pointColor_3(T abs = 0, T ord = 0, U col = 0): point<T>(abs,ord), color(col){}
    ~pointColor_3(){}
    void affiche() const;
};

template <typename T, typename U> void pointColor_3<T,U>::affiche() const{
  point<T>::affiche();
  cout << "** Couleur : " << color << endl;
  return;
}

// MAIN

int main(int argc,  char** argv){

  point<float>            pf(3.5,2.8);
  pointColor_1            pc1(3,5,9);
  pointColor_2<short>     pc2(12,45,5);
  pointColor_3<float,int> pc3(3.5,2.8,12);

  pf.affiche();
  pc1.affiche();
  pc2.affiche();
  pc3.affiche();

  return EXIT_SUCCESS;
}
