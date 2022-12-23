#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isEven(int value) { return (value % 2 == 0); }

void timesTwo(int &value) { value *= 2; }

void print(int value) { cout << value << " "; }

int main() {
  vector<int> vec;
  vec.push_back(24);
  vec.push_back(42);
  vec.push_back(73);
  vec.push_back(92);
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(15);
  vec.push_back(13);
  vec.push_back(15);

  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  cout << count(vec.begin(), vec.end(), 13);
  cout << endl;

  cout << count_if(vec.begin(), vec.end(), isEven);
  cout << endl;

  for_each(vec.begin(), vec.end(), timesTwo);
  for_each(vec.begin(), vec.end(), print);

  return 0;
}