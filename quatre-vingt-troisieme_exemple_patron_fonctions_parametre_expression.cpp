#include <iostream>

using namespace std;

// FUNCTION TEMPLATES

template <typename T> int compte(T *tab, int n){

  int nz = 0;

  for(int i = 0; i<n; i++){
    if(tab[i] == 0){
      nz++;
    }
  }
  return nz;
}

// MAIN

int main(int argc, char** argv){

  int t[5] = {0,1,2,3,4};
  int c[2] = {0,0};

  cout << "** Nombre d'éléments à 0 dans t : " << compte(t,6) << endl;
  cout << "** Nombre d'éléments à 0 dans c : " << compte(c,2) << endl;

  return EXIT_SUCCESS;
}
