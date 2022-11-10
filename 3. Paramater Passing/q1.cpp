 #include <iostream>
 using namespace std;

 int main() {
     // a
     cout << "Part A\n";
     int x;
     int y;
     int *z;

     x = 1;
     y = 2;

     z = &x;

     y = *z; /* a RHS use of *z, result is same as y = x */

     cout << "this is y (should be 1): " << y << '\n';
     cout << "this is *z (should be 1): " << *z << '\n' ; 

     *z = 3; /* a LHS use of *z, result is same as x = 3 */

     cout << "this is x (should be 3): " << x << '\n';
     cout << "this is z (depends on machine): " << z << '\n';

     z = &y; /* z points to y */
     
     cout << "this is *z (should be 1): " << *z << '\n';

     *z = 14; /* dereferencing to set y to contain 14 */

     cout << "this is *z now (should be 14): " << *z << '\n';
     cout << "this is y (should be 14): " << y << '\n';

     // b
     cout << "\nPart B\n";
     float yF;
     float *zF;

     zF = &yF;
     *zF = 3.14;
     cout << "this is *zF (should be 3.14): " << *zF << '\n';
     cout << "this is yF (should be 3.14): " << yF << '\n';

      // C
     cout << "\nPart C\n";
     char yC;
     char *zC;

     zC = &yC;
     *zC = 'A';
     cout << "this is *zC (should be 'A'): " << *zC << '\n';
     cout << "this is yC (should be 'A'): " << yC << '\n';
     cout << "this is zC (depends on machine): " << zC << '\n';
 }
