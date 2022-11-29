#include "Grammar.h"
#include <iostream>
#include <fstream>

Grammar::Grammar(){}

// open the file, get its lines one-by-one, feeding these to Rule constructor
// and using to build up rules member
Grammar::Grammar(string fname) {  
  ifstream file;
  file.open(fname);
  
  string line;
  while(getline(file,line)) { rules.push_back(Rule(line));}
}

// go thru rules using each members show method
void Grammar::show() {
  cout << "number of rules was " << rules.size() << endl;
  for (int i = 0; i < rules.size(); i++) { rules[i].show();}
}
