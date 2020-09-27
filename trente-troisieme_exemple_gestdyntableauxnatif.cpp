#include <iostream>
#include <memory>

using namespace std;

int main(void){

  int nb;
  int i;
  int* adi;
  unique_ptr<int[]> upi;

  cout << " Combien de valeurs : " ;
  cin >> nb;

  adi = new int [nb];

  cout << " Allocation de " << nb << " in en : " << adi << endl;

  for(i = 0; i < nb; i++){
    adi[i] = (i+1) * (i+1);
  }

  cout << " Voici les carres des nombres de 1 a " << nb << " : ";

  for(i = 0; i < nb; i++){
    cout << adi[i] << " ";
  }
  cout << endl;
  delete [] adi;

  cout << " Liberation des " << nb << " entiers " << endl;

  upi = make_unique<int[]> (nb);

  cout << " Allocation de " << nb << " in en : " << upi.get() << endl;

  for(i = 0; i < nb; i++){
    upi[i] = (i+1) * (i+1);
  }

  cout << " Voici les carres des nombres de 1 a " << nb << " : ";

  for(i = 0; i < nb; i++){
    cout << upi[i] << " ";
  }
  cout << endl;

  return EXIT_SUCCESS;
}
