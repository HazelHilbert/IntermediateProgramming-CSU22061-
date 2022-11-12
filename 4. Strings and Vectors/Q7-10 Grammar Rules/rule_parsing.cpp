#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

void fancy_print(vector<string> r);

int main(int argc, char *argv[]) {
    // open indicated file
    // get lines making vectors from rules

    char *fname;
    ifstream file;
    fname = argv[1]; // filename is first command line argument

    file.open(fname);

    string line;
    int nrules = 0;
    vector<string> rule;
    vector<vector<string> > the_rules;
    size_t i, start,len; // len is number of characters in a category
    string category;

    while(getline(file,line)) {

	i = line.find(" --> "); // i is first after mother
	start = i + 5;          // start is first of daughter
        len = i;                // length of mother is i
	category = line.substr(0,len); // make string from mother

	rule.push_back(category); // mother of rule gets pushed

	/* push all daughters up to last comma */
	while((i = line.find(",",start)) != string::npos) {
            len = i-start;     // length of current daughter 
	    category = line.substr(start,len);
	    rule.push_back(category);
	    start = i + 1;
	}

	/* push last dtr */

	category = line.substr(start);
	rule.push_back(category);

	the_rules.push_back(rule);
	
        nrules++;
        rule.clear();
    }
    /*
    while(true) {
      cout << "Enter a number to see all rules with that number of daughter sequences\n";
      
      int n;
      cin >> n;
      
      for (int i = 0; i < nrules; i++){
	if (n+1 == the_rules[i].size()) fancy_print(the_rules[i]);
      }
      
    }
    */
    for (int i = 0; i < nrules; i++) fancy_print(the_rules[i]);
    
    cout << "number of rules was " << nrules << endl;
}

void fancy_print(vector<string> r) {
  for (unsigned int i = 1; i < r.size(); i++) {
    if (r[i].find('[') != string::npos){
      cout << "word(" << r[i].substr(1, r[i].length()-2) << ")";
    }
    else {
      cout << r[i];
      if (i < r.size()-1) cout << ", ";
    }
  }
  
  cout << " --> " << r[0] << endl;
}
