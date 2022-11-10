#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void stats() {
  ifstream input;
  int minimum, maximum, count, len, total_length;
  float average;
  string word;

  minimum = maximum = total_length = count = 0;

  input.open("file_of_words");

  while(input >> word) {
    len = word.size();
    count++;
    total_length = total_length + len;

    if (count == 1) {
      minimum = len;
    }
    else if (len < minimum) {
      minimum = len;
    }

    if (count == 1) {
      maximum = len;
    }
    else if (len > maximum) {
      maximum = len;
    }
  }

  average = ((float)total_length)/count;

  cout << "average is " << average << '\n';
  cout << "minimum is " << minimum << '\n';
  cout << "maximum is " << maximum << '\n';
}
