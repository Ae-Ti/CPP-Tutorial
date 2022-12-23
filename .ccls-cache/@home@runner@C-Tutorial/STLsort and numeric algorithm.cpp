#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
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

  sort(vec.begin(), vec.end(), greater<int>());
  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  sort(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl;

  cout << "10 search result: " << boolalpha;
  cout << binary_search(vec.begin(), vec.end(), 10) << endl;

  cout << "19 search result: " << boolalpha;
  cout << binary_search(vec.begin(), vec.end(), 19) << endl;

  int sum = accumulate(vec.begin(), vec.end(), 0);
  cout << "sum: " << sum << endl;

  set<int> first;
  first.insert(10);
  first.insert(19);
  first.insert(14);
  first.insert(17);
  first.insert(13);
  for_each(first.begin(), first.end(), print);
  cout << endl;

  set<int> second;
  second.insert(16);
  second.insert(14);
  second.insert(13);
  second.insert(11);
  second.insert(20);
  for_each(second.begin(), second.end(), print);
  cout << endl;

  vector<int> temp(10);
  vector<int>::iterator iter;
  vector<int>::iterator endIter;
  endIter = set_union(first.begin(), first.end(), second.begin(), second.end(),
                      temp.begin());

  set<int> result;
  for (iter = temp.begin(); iter != endIter; iter++) {
    result.insert(*iter);
  }
  for_each(result.begin(), result.end(), print);
  cout << endl;

  return 0;
}