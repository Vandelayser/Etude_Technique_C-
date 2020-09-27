#include <iostream>

using namespace std;

// CLASS DECLARATION

class point {

  private :

    int x;
    int y;

  public :

    void initialize(int i, int j);
    void setX(int i);
    void setY(int i);
    void deplace(int di, int dj);
    void affiche() const;

};

void point::initialize(int i, int j){
  x = i;
  y = j;
  return;
}

void point::setX(int i){
  x = i;
  return;
}

void point::setY(int i){
  y = i;
  return;
}

void point::deplace(int di, int dj){
  x += di;
  y += dj;
  return;
}

void point::affiche() const{
  cout << "** Point aux coordonnées : " << x << " : " << y << endl;
  return;
}

class pointColor : public point{

  private :

    short color;

  public :

    void setColor(short i);
    void afficheColor();
};

void pointColor::setColor(short i){
  color = i;
  return;
}

void pointColor::afficheColor(){
  cout << "** Couleur du point : " << color << endl;
}

int main(int argc, char** argv){

  pointColor p;

  p.initialize(0,0);
  p.setColor(16);
  p.affiche();
  p.afficheColor();

  return EXIT_SUCCESS;
}
