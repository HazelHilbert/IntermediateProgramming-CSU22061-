
#include <iostream>
using namespace std;

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main() {

  int fahr, celsius;
  int lower, upper, step;

  lower = 0;     // lower limit of temperature table
  upper = 300;   // upper limit
  step = 20;     // step size

  fahr = lower;
  while (fahr <= upper) {
    celsius =  5 * (fahr-32) / 9;
    cout << fahr << '\t' << celsius << '\n';
    fahr = fahr + step;
  }
}

/* NOTES:
   5 * (fahr-32) / 9 vs 5 / 9 * (fahr - 32)

   example: fahr = 0
   5 * (0 - 32) / 9  vs 5 / 9 * (0 - 32)
   5 * -32 / 9       vs 5 / 9 * -32
   -160 / 9          vs 0 * -32
   -17               vs 0

   because 5 and 9 are integers, deviding them results in 0,
   so using the second formula will always result in 0
*/

// a version of the fahrenheit program which uses floating-point arithmetic
/*
int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    cout << fahr << '\t' << celsius << '\n';
    fahr = fahr + step;
  }
}
*/

// a version of the fahrenheit program which uses a for loop
/*
int main() {
  int fahr;

  for(fahr = 0; fahr <= 300; fahr = fahr + 20) {

    cout << fahr << '\t' << (5.0/9.0)*(fahr-32) << '\n';
  }
}
*/


