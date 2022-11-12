#include <iostream>
using namespace std;

bool is_vowel(char c);
bool is_cons(char c);

int main() {
  
  string word;
  int i;
  cout << "enter a word" << endl;
  cin >> word;
  
  for (i = 0; i < word.size(); i++) {
    char c = word[i];
    char V_or_C;
    
    if (is_vowel(c)) {
      V_or_C = 'V';
    }
    else if (is_cons(c)){
      V_or_C = 'C';
    }
    
    cout << c << ":" << V_or_C << endl;
  }
}
