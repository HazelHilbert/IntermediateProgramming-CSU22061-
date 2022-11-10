/*********************************/
/* tests the Trans_Dict class    */
/*********************************/
#include <iostream>
#include "TranslationDictionary.h"
#include <stdlib.h>
#include <string>

using namespace std;

void tester_function(Trans_Dict& d, string name, vector<string> fr_words, bool f_to_);


int main() {
    Trans_Dict d1("translist");  
    Trans_Dict d2("translist2");  

    if(!d1.opened_ok) {
      cerr << "dictionary to translist did not open ok\n";
      exit(0);
    }

    if(!d2.opened_ok) {
      cerr << "dictionary to translist2 did not open ok\n";
      exit(0);
    }

    vector<string> fr_words1 = {"soulier", "jupe", "chien"};
    tester_function(d1, "translist", fr_words1, true);
    
    vector<string> fr_words2 = {"chien", "oiseau", "soulier"};
    tester_function(d2, "translist2", fr_words2, true);
    
    vector<string> en_words1 = {"shoe", "hat"};
    tester_function(d1, "translist", en_words1, false);

    cout << "testing d1 after adding chapeau/hat\n";
    d1.update("chapeau", "hat");
    tester_function(d1, "translist", en_words1, false);
   
    cout << "test d2 after adding chien/hound\n";
    d2.update("chien", "hound");
    vector<string> fr_words3 = {"chien"};
    tester_function(d2, "translist2", fr_words3, true);

    d1.export_to_file("updated_translist");
    d2.export_to_file("updated_translist2");
}

void tester_function(Trans_Dict& d, string name, vector<string> words, bool f_to_e) {
  string trans;
  bool found;
  for(unsigned int i=0; i < words.size(); i++) {
    if(f_to_e && d.lookup_french(words[i],trans)) {
      cout << name << " trans of " << words[i] << " is " << trans << endl;
    }
    else if (!f_to_e && d.lookup_english(words[i],trans)) {
      cout << name << " trans of " << words[i] << " is " << trans << endl;
    }
    else {
      cout << "no " << name << " trans of " << words[i] << endl;
    }
  }
  cout << "------------\n";
}
