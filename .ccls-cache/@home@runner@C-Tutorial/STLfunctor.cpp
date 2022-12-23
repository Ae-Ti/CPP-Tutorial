#include <algorithm>
#include <functional>
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

  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  transform(vec.begin(), vec.end(), vec.begin(), negate<int>());
  for_each(vec.begin(), vec.end(), print);
  return 0;
}