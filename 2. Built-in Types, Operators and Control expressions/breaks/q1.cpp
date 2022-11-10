#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {

  ifstream myinput;
  string file_name;
  cout << "enter the full name of a file: ";
  cin >> file_name;
  myinput.open(file_name);

  string target_word;
  cout << "enter the word to search the file for: ";
  cin >> target_word;
  

  string word;
  while(myinput >> word) {
    if (word == target_word) {
      cout << "the file contains the target word";
      break;
    }
  }
}
