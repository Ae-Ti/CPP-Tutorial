#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
  vector<int> vec;
  vector<int>::iterator iter1;
  vector<int>::reverse_iterator iter2;

  for (int i = 0; i < 10; i++) {
    vec.push_back(i * 10)
  }

  iter1 = vec.begin();
  iter1 += 4;
  cout << *iter1 << " ";
  iter1 -= 2;
  cout << *iter1 << endl;

  iter2 = vec.rbegin();
  iter2 += 4;
  cout << *iter1 << " ";
  iter2 -= 2;
  cout << *iter1 << endl;

  int power = 5;
  vector<vector<int>> pascal
  
  return 0;
}