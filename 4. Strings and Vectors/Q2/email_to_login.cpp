#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

  ifstream myinput;
  myinput.open("hollywood_emails.txt");

  string email;
  while(myinput >> email) {
    cout << email.substr(0, email.find('@')) << endl;
  }
}
