#include <iostream>
#include <vector>

using namespace std;

int main(void){

  vector<int> v1 = {0,1,2,};
  vector<int> v2 = {0,1,2,3};

  // PHASE1 ########################################################################################
  cout << "--En I  : Les " << v1.size() << " valeurs du vecteur v1 sont : ";

  for(auto e : v1){
    cout << e;
  }
  cout << endl;

  cout << "--En I  : Les " << v2.size() << " valeurs du vecteur v2 sont : ";

  for(auto e : v2){
    cout << e;
  }
  cout << endl;

  // PHASE AFFECTATION #############################################################################

  v1 = v2;

  // PHASE2 ########################################################################################

  cout << "--En II : Les " << v1.size() << " valeurs du vecteur v1 sont : ";

  for(auto e : v1){
    cout << e;
  }
  cout << endl;

  cout << "--En II : Les " << v2.size() << " valeurs du vecteur v2 sont : ";

  for(auto e : v2){
    cout << e;
  }
  cout << endl;

  return EXIT_SUCCESS;
}
