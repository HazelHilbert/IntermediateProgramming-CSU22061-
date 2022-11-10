#include <string>
#include <iostream>
#include <fstream>
using namespace std;

bool is_vowel(char c);
bool is_cons(char c);
function find_function(int choice);

int main() {
  ifstream thefile;
  thefile.open("afile_from_bodmer.txt");

  cout << "elim which?: enter 1 for vowels or 2 for cons\n";
  int choice;
  cin >> choice;
  
  string s;
  while(getline(thefile,s)) {
    for (int i = 0; i < s.length(); i++) {
      if (find_function(s[i])){
	cout << "*";
      }
      else {
	cout << s[i];
      }
    }
  }
}

function find_function(int choice) {
  if (choice == 1) {
    return is_vowel;
  }
  else if (choice == 2) {
    return is_cons;
  }
  else {
    return null;
  }
}
