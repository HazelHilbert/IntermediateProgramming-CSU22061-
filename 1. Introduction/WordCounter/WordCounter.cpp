/* open a stream to a file */
/* read strings one by one */
/* print the total */

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {

  string word;
  ifstream myinput; /* creates a stream, not attached to anything */
  int i = 0;

  myinput.open("file_of_words.txt"); /* attach stream to a file */

  while(myinput >> word) {
    i++;
  }

  cout << i << '\n';

}
