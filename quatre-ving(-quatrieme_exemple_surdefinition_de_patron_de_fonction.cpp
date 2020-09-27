#include <iostream>

using namespace std;

// FUNCTION TEMPLATES

template <typename T> int minimum(T a, T b){
  return (a < b) ? a : b;
}
template <typename T> int minimum(T* a, T b){
  return (*a < b) ? *a : b;
}
template <typename T> int minimum(T a, T* b){
  return (a < *b) ? a : *b;
}
template <typename T> int minimum(T* a, T* b){
  return (*a < *b) ? *a : *b;
}

int main(int argc, char** argv){

  int a = 0;
  int b = 1;
  int* ptr_a = &a;
  int* ptr_b = &b;

  cout << "** Le minimum est : " << minimum(a,b) << endl;
  cout << "** Le minimum est : " << minimum(ptr_a,b) << endl;
  cout << "** Le minimum est : " << minimum(a,ptr_b) << endl;
  cout << "** Le minimum est : " << minimum(ptr_a,ptr_b) << endl;

  return EXIT_SUCCESS;
}
