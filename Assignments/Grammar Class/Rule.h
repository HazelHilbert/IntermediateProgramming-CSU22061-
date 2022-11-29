#include <string>
#include <vector>
using namespace std;

class Rule {
 public:
  Rule();
  Rule(string line);
  string mother;
  vector<string> daughters;
  void show();
};
