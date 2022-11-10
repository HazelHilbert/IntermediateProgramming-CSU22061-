#include <string>
#include <vector>
using namespace std;

struct CodePair {
  char plain;
  string code;
};

// this will store the pairings
extern vector<CodePair> code_table;

// these functions will refer to above global variable to encode/decode
// could put extern in front of the function decls, but not actually necessay

bool set_up_table(string key_file);
void encode_a_file(string filename);
vector<string> encode_a_word(string word);
string encode_a_char(char c);

//TODO
void decode_a_file(string filename);
char decode_a_morse_code(string morse_code);
