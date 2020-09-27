#include <iostream>
#include <memory>

using namespace std;

// MAIN

int main(void){

{
  shared_ptr<int> sp1 = make_shared<int> (10);
  shared_ptr<int> sp2 = make_shared<int> (20);
  shared_ptr<int> sp3;

  cout << "-- En I   : sp1 = " << sp1.get() << " | *sp1 = " << *sp1 << " | compteur sp1 = " << sp1.use_count() << endl;
  cout << "-- En I   : sp2 = " << sp2.get() << " | *sp2 = " << *sp2 << " | compteur sp2 = " << sp2.use_count() << endl;

  sp3 = sp1;

  cout << "-- En II  : sp1 = " << sp1.get() << " | *sp1 = " << *sp1 << " | compteur sp1 = " << sp1.use_count() << endl;
  cout << "-- En II  : sp2 = " << sp2.get() << " | *sp2 = " << *sp2 << " | compteur sp2 = " << sp2.use_count() << endl;
  cout << "-- En II  : sp3 = " << sp3.get() << " | *sp3 = " << *sp3 << " | compteur sp2 = " << sp3.use_count() << endl;

  sp1 = sp2;

  cout << "-- En III : sp1 = " << sp1.get() << " | *sp1 = " << *sp1 << " | compteur sp1 = " << sp1.use_count() << endl;
  cout << "-- En III : sp2 = " << sp2.get() << " | *sp2 = " << *sp2 << " | compteur sp2 = " << sp2.use_count() << endl;
  cout << "-- En III : sp3 = " << sp3.get() << " | *sp3 = " << *sp3 << " | compteur sp2 = " << sp3.use_count() << endl;

  sp1 = nullptr;

  cout << "-- En IV  : sp1 = " << sp1.get() << endl;
  cout << "-- En IV  : sp2 = " << sp2.get() << " | *sp2 = " << *sp2 << " | compteur sp2 = " << sp2.use_count() << endl;
  cout << "-- En IV  : sp3 = " << sp3.get() << " | *sp3 = " << *sp3 << " | compteur sp2 = " << sp3.use_count() << endl;
}

  return EXIT_SUCCESS;
}
