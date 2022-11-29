#include <iostream>
#include "Rule.h"


Rule::Rule() {}

Rule::Rule(string line) {
  int i = line.find(" --> "); // i is first after mother
  int start = i + 5;          // start is first of daughter
  int len = i;                // length of mother is i
  mother = line.substr(0,len); // make string from mother

  /* push all daughters up to last comma */
  while((i = line.find(",",start)) != string::npos) {
    len = i-start;     // length of current daughter 
    daughters.push_back(line.substr(start,len));
    start = i + 1;
  }

  /* push last daughter */
  daughters.push_back(line.substr(start));
}

void Rule::show() {
  cout << mother << " -->" << endl;
  string spacing = "     ";
  for(int i = 0; i < daughters.size(); i++) {
    cout << spacing << daughters[i] << endl;
  }
}
