#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {

  ifstream myinput;
  myinput.open("file_of_nums.txt");

  float  num;
  vector<float> nums;   
  while(myinput >> num){
    nums.push_back(num);
  }
  
  float max = nums[0];
  float min = nums[0];
  float sum = 0;
  int i;
  for(i = 0; i < nums.size(); i++) {
    if(nums[i] < min) {
      min = nums[i];
    }
    if(nums[i] > max) {
      max = nums[i];
    }
    sum += nums[i];
  }
  float mean = sum/i;
  
  float var = 0;
  for(i = 0; i < nums.size(); i++) {
    var += pow(nums[i]-mean, 2);
  }
  var /= i-1;
  
  cout << "min: " << min << " max: " << max << " mean: " << mean << " var: " << var << endl;
}
