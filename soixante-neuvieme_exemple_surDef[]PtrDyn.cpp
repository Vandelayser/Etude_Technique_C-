#include <iostream>
#include <memory>

using namespace std;

// CLASS DECLARATIONS

class vect{

  public :

    vect(int n) : nelem(n), adr(make_unique<double[]>(n)){}

    ~vect(){}

    double & operator [] (int i);

  private :

    int nelem;
    unique_ptr<double[]> adr;

};

// METHODE DECLARATIONS

double & vect::operator[](int i){
  return adr[i];
}

// MAIN

int main(int argc, char* argv[]){

  int i;
  vect a(3);
  vect b(3);
  vect c(3);

  for(i = 0; i < 3; i ++){
    a[i] = i;
    b[i] =  2*i;
    c[i] = a[i] + b[i];
  }

  for(i = 0; i < 3; i ++){
    cout << c[i] << " ";
  }

  return EXIT_SUCCESS;
}
