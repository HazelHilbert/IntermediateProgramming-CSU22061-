#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits

using namespace std;

int main () {
  cout << "Minimum value for int: " << numeric_limits<int>::min() << '\n';
  cout << "Maximum value for int: " << numeric_limits<int>::max() << '\n';
  cout << "int is signed: " << numeric_limits<int>::is_signed << '\n';
  cout << "Minimum value for unsigned int: " << numeric_limits<unsigned int>::min() << '\n';
  cout << "Maximum value for unsigned int: " << numeric_limits<unsigned int>::max() << '\n';
  cout << "unsigned int is signed: " << numeric_limits<unsigned int>::is_signed << '\n';
  cout << "Minimum value for unsigned long int: " << numeric_limits<unsigned long int>::min() << '\n';
  cout << "Maximum value for unsigned long int: " << numeric_limits<unsigned long int>::max() << '\n';
  cout << "Minimum value for unsigned long long int: " << numeric_limits<unsigned long long int>::min() << '\n';
  cout << "Maximum value for unsigned long long int: " << numeric_limits<unsigned long long int>::max() << '\n';

  return 0;
}
