#include <iostream>
#include <vector>

using namespace std;

int main(void){

  unsigned int i;
  unsigned int nb;
  unsigned int over_avg = 0;
  float sum = 0.0;
  float avg = 0.0;

  cout << "-- Donnez le nombre de notes : ";
  cin >> nb;

  vector<float> notes (nb);

  for(i = 0; i < nb; i++){
    cout <<"-- Donnez la note numero " << i+1 << " : ";
    cin >> notes[i];
  }

  for(i = 0; i < nb; i++){
    sum += notes[i];
  }

  avg = sum/nb;

  cout << "-- Moyenne de la classe = " << avg << endl;

  for(i = 0; i < nb; i++){
    if(notes[i]>avg){
      over_avg++;
    }
  }

  cout << "-- Eleves au dessus de la moyenne = " << over_avg << endl;
  return EXIT_SUCCESS;
}
