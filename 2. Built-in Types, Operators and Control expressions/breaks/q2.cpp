#include <iostream>
using namespace std;

int main() {
  float number;
  float total = 0;
  while(true) {
    cout << "enter a number:";
    cin >> number;
    if (number >= total/10.0) {
      total += number;
      cout << "running total is:" << total << '\n';
    }
    else {
      cout << "your contribution is so derisory that I am exiting my loop";
      break;
    }
  }
}
