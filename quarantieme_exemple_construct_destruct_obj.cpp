#include <iostream>

using namespace std;

// CLASS DECLARATIONS

class test{

  public:

    test(int t);
    ~test();

    int num;

};

// METHODE DECLARIATIONS

test::test(int t) : num(t){

 cout << "++ Appel du constructeur - num = " << num << endl;
 return;
}

test::~test(){

  cout << "-- Appel du destructeur  - num = " << num << endl;
  return;
}

// FUNCTION PROTOTYPES

void fct(int p);

// MAIN

int main(int argc, char* argv[]){

  int i;
  test a(1);

  for(i = 2 ; i <= 4; i++){

    fct(i);
  }

  return EXIT_SUCCESS;
}

// FUNCTION DECLARATIONS

void fct(int p){
  test x(2*p);
}
