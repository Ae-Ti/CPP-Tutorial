#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(int value) { cout << value << " "; }

int main() {
  vector<int> vec;
  vec.push_back(24);
  vec.push_back(42);
  vec.push_back(73);
  vec.push_back(92);
  vec.push_back(17);
  vec.push_back(10);

  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  reverse(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  rotate(vec.begin(), vec.begin() + 3, vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  random_shuffle(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  return 0;
}