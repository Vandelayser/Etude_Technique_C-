#include <iostream>

using namespace std;

// FUNCTION TEMPLATES

template <typename T> void f(initializer_list<T> val){
  cout << val.size() << " Valeurs : ";
  for(T v : val){
    cout << v << " | ";
  }
  cout << endl;
}

int main(int argc, char** argv){

  f({1,2});
  f<float>({1,2.0f});


  return EXIT_SUCCESS;
}
