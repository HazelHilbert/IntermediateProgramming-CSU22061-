#include <iostream>
#include "chap1.h"
using namespace std;

int main() {
  int func;
  
  bool quit = false;
  while(!quit){
    cout << "which function to execute?\n1 for stats\n2 for bmi\n3 for birthday\n0 for quit\n";
    cin >> func;

    switch(func){
    case(0):
      quit = true;
      break;
    case(1):
      stats();
      break;
    case(2):
      bmi();
      break;
    case(3):
      birth_square();
      break;
    default:
      cout << "not a valid input\n";
    }
  }
}
