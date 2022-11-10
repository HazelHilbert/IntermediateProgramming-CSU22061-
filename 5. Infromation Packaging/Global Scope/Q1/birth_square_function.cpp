#include <iostream>
using namespace std;

void birth_square() {
  int mm; 
  int dd;
  int i, j;
  mm = 2;
  dd = 25;

  for (i=0; i < mm; i++) {
    for(j=0; j < dd; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

