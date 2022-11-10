#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

  ifstream file;
  file.open("length3words.txt");

  string word;
  vector<string> words;   
  while(file >> word){
    words.push_back(word);
  }

  srand(time(NULL));
  int index;
  string input;
  int set_size = 10;
  for(int i = 0; i < set_size; i++){
    word = words[rand() % words.size()];
    index = rand() % 3;
    word.erase(index, 1);
    word.insert(index, "_");

    cout << "fill the gap in: " << word << endl;
    cin >> input;
    word.erase(index, 1);
    word.insert(index, input);

    bool valid = false;
    for(int i = 0; i < words.size(); i++){
      if (word == words[i]){
	valid = true;
	break;
      }
    }
    
    if (valid) cout << "yep reckon " << word << " is possible\n";
    else cout << "nope reckon " << word << " is not possible\n";
  }
}
