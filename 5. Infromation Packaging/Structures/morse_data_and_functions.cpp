#include "morse_data_and_functions.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

vector<CodePair> code_table;

bool set_up_table(string key_file) {
  ifstream table_stream;
  table_stream.open(key_file);
  if(!table_stream) {
    cout << "prob opening " << key_file << endl;
    return false;
  }

  string line;
  while(getline(table_stream,line)) {
    // make CodePair object with 'plain' and 'code' set from contents of line
    // then push this to code_table
    CodePair pair;
    pair.plain = line[0];
    pair.code = line.substr(2);
    code_table.push_back(pair);
  }

  // check;
  cout << "size of code table " << code_table.size() << endl;
  for(int i=0; i < code_table.size(); i++) {
    cout << code_table[i].plain << " " << code_table[i].code << endl;
  }
  return true;
}

string encode_a_char(char c) {
      // COMPLETE THIS
  // run through the table looking for a member whose 'plain' part equals c
  // and return the 'code' part
  for (int i = 0; i < code_table.size(); i++){
    if (code_table[i].plain == c) return code_table[i].code;
  }
  return "*****"; // this should happen only if nothing matches
}

vector<string> encode_a_word(string word) {
    // COMPLETE THIS
  // run thru the word, finding code for each letter, each time pushing that to a vector
  vector<string> encoded;
  for(int i = 0; i < word.size(); i++) {
    encoded.push_back(encode_a_char(word[i]));
  }
  
  // return that vector
  return encoded;
  // note in this initial state each word gets mapped to an empty vector and so the result of encoding a file is going to be pretty unexciting
}


void encode_a_file(string filename) {
  // THIS IS DONE (it uses 'encode_a_word') 
  // get each 'word' via <<,
  //  for each word run through its chars, find and output their code
  //  (separate the codes with 3 spaces)
  //  (separate the wrds with 7 spaces)
  ifstream file;
  file.open(filename);
  if(!file) {
    cout << "prob opening" << filename << endl;
    exit(1);
  }

  string word;
  vector<string> coded_word;
  while(file >> word) {
    coded_word = encode_a_word(word);
    for(int i=0; i < coded_word.size(); i++) {
      cout << coded_word[i];
      if(i != coded_word.size()-1) {
	cout << "   ";
      }
    }
    cout << "       ";
  }
  
  cout << endl;
}

//TODO
// void decode_a_file(string filename);
// char decode_a_morse_code(string morse_code);
