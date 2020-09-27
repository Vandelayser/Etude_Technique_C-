#include <iostream>

using namespace std;

int main(void){

  char op;
  int n1, n2;

  cout << "Operations souhaitees (+ ou *) ?";
  cin >> op;
  cout << "Donnez deux nombres entiers: ";
  cin >> n1 >> n2;

  if(op == '+'){
    cout << "Leur somme est : " << (n1+n2) << "\n";
  }
  else{
    cout << "Leur produit est : " << (n1*n2) << "\n";
  }
}
