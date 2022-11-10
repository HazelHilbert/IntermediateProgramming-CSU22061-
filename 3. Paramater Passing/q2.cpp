 #include <math.h>
 #include <iostream>
 using namespace std;

double mymodf1(double n, double *intpart);
double mymodf2(double n, double *fracpart);
void  mymodf3(double n, double *intpart, double *fracpart);

 int main () {

   double f, intpart, fracpart;

   while (1) {
     cout << "input a number:\n";
     cin >> f;

     //fracpart = mymodf1(f,&intpart);
     //intpart = mymodf2(f,&fracpart);
     mymodf3(f,&intpart,&fracpart);
     
     cout << "number input is" << f << '\n';
     cout << "integer part is:" << intpart << '\n';
     cout << "fractional part is:" << fracpart << '\n';
   }
 }

 double mymodf1(double n, double *intpart) {
   double fracpart;
   *intpart = floor(n);
   fracpart = n - *intpart;
   return fracpart;
 }

 double mymodf2(double n, double *fracpart) {
   double intpart;
   intpart = floor(n);
   *fracpart = n - intpart;
   return intpart;
 }

 void  mymodf3(double n, double *intpart, double *fracpart){
   *intpart = floor(n);
   *fracpart = n - *intpart;
 }

