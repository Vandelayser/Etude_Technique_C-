#include<iostream>

using namespace std;

int main(void){

  int n;
  bool c = true;

  while(c){
    cout << "Donnez un entier: ";
    cin >> n;

    if( n&1 == 1){
      cout << "Il est impaire\n";
      cout << "Continuez ? (1 ou 0)";
      cin >> c;
    }
    else{
      cout << "Il est pair\n";
      cout << "Continuez ? (1 ou 0)";
      cin >> c;
    }
  }
  return EXIT_SUCCESS;
}
