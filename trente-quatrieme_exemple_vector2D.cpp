#include <iostream>
#include <vector>

using namespace std;

int main(void){

  int i;
  int j;
  vector<vector<int>> v = {{0,1,2,3},
                           {0,1,2,3},
                           {0,1,2,3}};

  for(auto l : v){
    for(auto e : l){
      cout << e << " ";
    }
    cout << endl;
  }

  for(i = 0; i<v.size(); i++){
    for(j = 0; j< v[i].size(); j++){
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  
  return EXIT_SUCCESS;
}
