#include <iostream>

using namespace std;

// FUNCTION TEMPLATE DECLARATION

void affiche(){}
template <typename T,typename...TypeParams> void affiche(T v,TypeParams...autres){
  cout << v << endl;
  affiche(autres...);
}

int main(int argc, char** argv){

  string ch = "Bonjour !";
  affiche(ch,12,77.7f);

  return EXIT_SUCCESS;
}
