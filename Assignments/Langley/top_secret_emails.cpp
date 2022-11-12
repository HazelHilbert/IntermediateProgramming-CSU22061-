#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

bool is_an_email(string s);

int main() {

  string filename;
  cout << "which file\n";
  cin >> filename;
  
  ifstream f;
  f.open(filename);
  if(!f) { cout << "could not open\n"; return 0; }

  vector<string> the_file;
  bool is_top_secret = false;
  string word;
  // read each word of the file into a vector
  // while doing so check if the code "TOP_SECRET" appears anywhere
  while(f >> word) {
    if(word.find("TOP-SECRET") != string::npos) is_top_secret = true;
    the_file.push_back(word);
  }

  // if the code word is in the file, output all the emails
  if (is_top_secret) {
    ofstream output_file (filename + "_emails");
    for(int i = 0; i < the_file.size(); i++) {
      if (is_an_email(the_file[i])) {
	cout << the_file[i] << endl;
	output_file << the_file[i] << endl;
      }
    }
  }
  
}

//  check that s contains @ somewhere,
//  but not right at start and not right at end
bool is_an_email(string s) {
  
  // finds position of @ symbol
  int pos = s.find('@');
  
  // returns true if string has @ symbol and it isn't the first or last character
  if ((pos != string::npos) && (pos != 0) && (pos != s.length()-1)) return true;
  return false;
  
}

