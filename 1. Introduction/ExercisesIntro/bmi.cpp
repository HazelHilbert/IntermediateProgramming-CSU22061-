#include <iostream>
using namespace std;

int main() {
  float h, w, bmi;

  cout << "enter a target bmi\n";
  cin >> bmi;
  
  cout << "for target bmi " << bmi << '\n';
  cout << "height\tweight\n";
  
  for (h = 2.3; h > 1.3; h -= 0.05) {
    cout << h << '\t' << bmi * h * h << '\n';
  }
}
