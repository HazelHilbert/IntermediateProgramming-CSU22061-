#include <fstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;



int main() {
  
  string filename;
  cout << "what file do you want to search in?\n";
  cin >> filename;

  ifstream thefile;
  thefile.open(filename);
  if(!thefile) { cout << "prob opening\n"; return 1; }

  bool repeat = false;
  string word;
  vector<string> words;
  while(thefile << word) {
    for(int i = 0; i < words.length; i++) {
      if (word == words[i]){
	cout << "there is a repeat!";
	repeat = true;
	break;
      }
    }
    if (repeat) break;
    else  words.push_back(word);
  }
}
