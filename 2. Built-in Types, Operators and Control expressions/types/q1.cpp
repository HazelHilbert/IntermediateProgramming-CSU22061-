#include <iostream>
using namespace std;

int main() {
  int sounds_per_sec = 15;
  cout << "sounds per sec: " << sounds_per_sec << '\n' ;

  int muscles_per_sound = 15;
  cout << "muscles per sound: " <<  muscles_per_sound << '\n' ;

  int muscle_mv_per_min = sounds_per_sec * muscles_per_sound * 25;
  cout << "muscles moved per min: " << muscle_mv_per_min << '\n' ;

  int muscle_mv_per_day = muscle_mv_per_min * 60 * 3;
  cout << "muscles moved per day: " << muscle_mv_per_day << '\n' ;

  float  muscle_mv_in_15_yrs = muscle_mv_per_day * 365.0 * 15;
  cout << "muscles moved in 15 years: " << muscle_mv_in_15_yrs << '\n' ;
}
