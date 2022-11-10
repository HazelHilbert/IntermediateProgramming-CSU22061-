#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream thefile;
  thefile.open("file.txt");

  
  char c;
  int open_bracket = 0;
  while(thefile.get(c)) {
    if (c == 40) {
      open_bracket++;
    }
    else if (c == 41) {
      open_bracket--;
    }
    
    else if (open_bracket == 0) {
      cout << c;
    }
  }
}
