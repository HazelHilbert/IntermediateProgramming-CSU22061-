#include <iostream>
using namespace std;

int power(int m, int n);


/* test power function */
int main() {

  int i;

  cout << "some powers of 2" << endl;
  for (i = 0; i < 10; i = i + 1) {
    cout << i << " " << power(2,i) << endl;
  }

  cout << "some powers of -3" << endl; 
  for (i = 0; i < 10; i = i + 1) {
    cout << i << " " << power(-3,i) << endl;
  }

}

int power(int base, int n) {

  int i, p;

  p = 1;
  for (i = 1; i <= n; i = i + 1) {
    p = p * base;
  } 
  return p;

}
