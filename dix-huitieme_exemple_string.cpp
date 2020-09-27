#include <iostream>

using namespace std;

// FUNCTIONS PROTOTYPES

void formulaire(void);

// MAIN

int main(void){

  formulaire();

  return EXIT_SUCCESS;
}

// FUNCTIONS DECLARATIONS

void formulaire(void){

  unsigned int i;
  string ch1;
  string ch2;
  string concact;
  string intro = " Bonjour";
  string sentence1 = " Quel est votre nom : ";
  string sentence2 = " Quel est votre prénom : ";
  string sentence3 = " A G R A N D I S S E M E N T : ";

  cout << sentence1;
  cin >> ch1;

  cout << sentence2;
  cin >> ch2;

  concact = intro + " " + ch1 + " " + ch2;
  cout << concact << endl;

  cout << sentence3;
  for(i = 1; i < concact.size(); i++){
    cout << concact[i] << " ";
  }

  return;
}
