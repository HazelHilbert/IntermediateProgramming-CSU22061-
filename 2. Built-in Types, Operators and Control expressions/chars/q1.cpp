#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream thefile;
  thefile.open("file.txt");

  
  char c;
  while(thefile.get(c)) {
    if (c != 40 && c != 41) {
      cout << c;
    }
  }
}
