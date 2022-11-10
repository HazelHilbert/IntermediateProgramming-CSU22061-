#include <iostream>
 using namespace std;
 int main() {

   int x = 16777216;
   float f;
   f = x + 1.0;
   x = f;
   cout << "f is: " << f << endl;
   cout << "x is: " << x << endl;
 }
