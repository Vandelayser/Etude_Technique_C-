#include <iostream>
#include <vector>
#include <memory>
#include <cstdlib>

using namespace std;

// CLASS DECLARATIONS

class hasard{

  public :

  hasard (int n, int m);
  void affichage();

  private :

  int nb;
  int max;
  vector<int> val;
};

// CLASS METHODE

hasard::hasard(int n, int m) : nb(n), max(m){

  int i;

  if(nb<=0 ){
    nb=1;
  }
  if(max<1){
    max=1;
  }
  val = vector<int>(nb);

  for(i = 0; i<nb; i++){
    val[i] = double (rand())/ RAND_MAX * max;
  }
}

void hasard::affichage(){

  int i;

  for(i = 0; i < nb; i++){
    cout << val[i] << " ";
  }
  cout << endl;
}
// MAIN

int main(int argc, char* argv[]){

  hasard suite1 (15, 5);
  hasard suite2 (20, 9);
  hasard suite3 (-2,0);

  suite1.affichage();
  suite2.affichage();
  suite3.affichage();

  return EXIT_SUCCESS;
}
