#include <string>
#include <iostream>
#include <fstream>
using namespace std;

bool is_vowel(char c);
bool is_cons(char c);

int main() {
  ifstream thefile;
  thefile.open("afile_from_bodmer.txt");

  cout << "elim which?: enter 1 for vowels or 2 for cons\n";
  int choice;
  cin >> choice;
  
  string s;
  while(getline(thefile,s)) {
    if (choice == 1) {
      for (int i = 0; i < s.length(); i++) {
	if (is_vowel(s[i])) {
	  cout << '*';
	}
	else {
	  cout << s[i];
	}
      }
    }
    else if (choice == 2) {
      for (int i = 0; i < s.length(); i++) {
	if (is_cons(s[i])) {
	  cout << '*';
	}
	else {
	  cout << s[i];
	}
      }
    }
    else {
      cout << s;
    }
    cout << '\n';
  }
}
