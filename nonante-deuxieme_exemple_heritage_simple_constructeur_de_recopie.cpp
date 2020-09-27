#include <iostream>

using namespace std;

// CLASS PROTOTYPES

class point;
class pointColor;

// CLASS  DECLARATIONS
class point {

  private :

    int x;
    int y;

  public :

    point(int abs = 0, int ord = 0) : x(abs), y(ord){
      cout << "Creation : x = " << x << " : y = "<< y << endl;}
    point(const point &p): x(p.x), y(p.y){}
    ~point(){cout << " Destruction du point "<< endl;}
    point& operator=(const point& a);
    void initialize(int i, int j);
    void setX(int i);
    void setY(int i);
    int getX();
    int getY();
    void deplace(int di, int dj);
    void affiche() const;

};

point& point::operator=(const point& a){
  x = a.x;
  y = a.y;
  return *this;
}

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

int point::getX(){
  return x;
};

int point::getY(){
  return y;
};

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

    pointColor(int abs = 0, int ord = 0, short c = 0) : point(abs,ord), color(c){
      cout << "Creation : x = " << getX() << " : y = " << getY() << " : color = " << color << endl;}
    pointColor(const pointColor &p) : point(p), color(p.color){}
    ~pointColor(){cout << " Destruction du point "<< endl;}
    pointColor& operator=(const pointColor& a);
    void initialize(int i, int j, short k);
    void setColor(short i);
    void affiche();
};

pointColor& pointColor::operator=(const pointColor& a){
  point* adr1;
  const point* adr2;

  adr1 = this;
  adr2 = &a;

  *adr1 = *adr2;
  color = a.color;
  return *this;
}

void pointColor::initialize(int i, int j, short k){
  point::initialize(i,j);
  setColor(k);
  return;
}

void pointColor::setColor(short i){
  color = i;
  return;
}

void pointColor::affiche(){
  point::affiche();
  cout << "** Couleur du point : " << color << endl;
}

int main(int argc, char** argv){

  pointColor p;
  pointColor m(10,10,8);
  pointColor* adr;
  pointColor copy;

  adr = new pointColor(5,5,5);

  p.initialize(0,0,16);
  p.affiche();
  m.affiche();
  adr->affiche();

  copy = p;
  copy.affiche();

  delete adr;

  return EXIT_SUCCESS;
}
