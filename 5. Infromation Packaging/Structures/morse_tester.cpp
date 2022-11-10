#include "morse_data_and_functions.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

  bool table_ok;
  
  string table_name;
  cout << "give the name of key file\n";
  cin >> table_name;
  table_ok = set_up_table(table_name);
  
  if(!table_ok) {
    cout << "prob opening the file\n";
    exit(1);
  }


  cout << "what file to encode?" << endl;
  string file_to_code;
  cin >> file_to_code;
  encode_a_file(file_to_code);

  // perhaps to do on another day
  // cout << "what file to decode?" << endl;
  // string file_to_decode;
  // cin >> file_to_decode;
  // decode_a_file(file_to_decode);  
}
