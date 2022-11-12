#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

  cout << "What two part string should be searched for? ";
  string s;
  getline(cin, s);
  
  ifstream file;
  file.open("file_of_words.txt");
  
  string line;
  bool contains = false;
  while(getline(file,line)) {
    if(line.find(s) != string::npos) {
      cout << "the file contians the string: " << s;
      contains = true;
      break;
    }
  }
  if (!contains) {
    cout << "the file doesn't contian the string: " << s;
  }
}
