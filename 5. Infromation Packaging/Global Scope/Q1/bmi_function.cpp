#include <iostream>
#include <string>
using namespace std;

float max_weight_frm_height_and_targ_bmi(float h_in_m, float bmi);

void bmi() {
  float bmi;
  cout << "enter a target bmi\n";
  cin >> bmi;

  cout << "for target bmi " << bmi << endl;

  for(float h_cms = 230; h_cms > 130; h_cms -= 5) {
    cout << h_cms/100 << "\t" << max_weight_frm_height_and_targ_bmi(h_cms/100, bmi) << endl;
  }
}

float max_weight_frm_height_and_targ_bmi(float h_in_m, float bmi) {
  float max_wt;
  max_wt = bmi * h_in_m * h_in_m;
  return max_wt;
}
