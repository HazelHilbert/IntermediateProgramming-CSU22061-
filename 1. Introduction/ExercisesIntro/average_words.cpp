#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {

  ifstream myinput;
  myinput.open("file_of_words.txt");
  string word;
  myinput >> word;
  
  int characters = word.size() ;
  int words = 1;
  string longest = word;
  string shortest = word;

  while(myinput >> word) {
    characters += word.size();
    words++;
    if (word.size() > longest.size()) {
      longest = word;
    }
    else if (word.size() < shortest.size()) {
      shortest = word;
    }
  }

  cout << "The average word length of the file is: " << characters * 1.0 / words << "\n";
  cout << "The maximum word length of the file is: " << longest.size() << "\n";
  cout << "The minimum word length of the file is: " << shortest.size() << "\n";
}
