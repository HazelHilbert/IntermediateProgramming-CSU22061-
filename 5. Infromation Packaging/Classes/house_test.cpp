#include <string>
#include <iostream>
using namespace std;

class House {
public:
  House();
  string wall_colours;
  void show();

};

House::House() {
  wall_colours = "grey";
}

void House::show() {
  cout << "walls: " << wall_colours << endl;
}

void paintwalls(House& h,string colour);

int main() {
  House h;
  cout << "before\n";
  h.show();
  
  paintwalls(h,"yellow");
  cout << "after\n"; 
  h.show();
}

void paintwalls(House& h,string colour) {
  h.wall_colours = colour;
}
