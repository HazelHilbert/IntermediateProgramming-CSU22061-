#include <iostream>
using namespace std;
extern int power(int base, int n);

int main() {
  int i;
  for (i = 0; i < 10; i = i + 1) {
    cout << i << " " << power(2,i) << " " << power(-3,i) << "\n";
  }
}
