#include <iostream>
using namespace std;

int main() {
  int day, month;
  int i, j;
  
  cout << "enter your birthday in the format 'd m y' (ex: '25 9 2022') \n";
  cin >> day >> month;

  cout << "your birthday stars:\n";
  
  for (i = 0; i < month; i++) {
      for (j = 0; j < day; j++) {
        cout << "*";
      }
       cout << "\n";
  }
}
