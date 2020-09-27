#include <iostream>
#include <vector>

using namespace std;

int main(void){

  unsigned int i;
  vector<int> v = {1,2,3};

  //PHASE 1 ########################################################################################
  cout << "-- En I  : elements du vector v = ";
  for(auto e : v){
    cout << e;
  }
  cout << endl;

  //PHASE 2 ########################################################################################
  for(i = 0; i < v.size(); i++){
    v[i]++;
  }
  cout << "-- En II : elements du vector v = ";
  for(auto e : v){
    cout << e;
  }
  cout << endl;

  //PHASE 3 ########################################################################################
  for(auto e : v){
    e++;
  }
  cout << "-- En III: elements du vector v = ";
  for(auto e : v){
    cout << e;
  }
  cout << endl;

  //PHASE 4 ########################################################################################

  for(auto &e :v){
    e++;
  }
  cout << "-- En IV : elements du vector v = ";
  for(auto e : v){
    cout << e;
  }
  cout << endl;

  return EXIT_SUCCESS;
}
