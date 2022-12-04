#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  vector<int>::iterator iter1;
  vector<int>::reverse_iterator iter2;

  for (int i = 0; i < 10; i++) {
    vec.push_back(i * 10);
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
  vector<vector<int>> pascal(power + 1, vector<int>());

  for (int i = 0; i <= power; i++) {
    for (int j = 0; j < i + 1; j++) {
      pascal[i].push_back(0);
    }
  }

  for (int i = 0; i <= power; i++) {
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || i == j) {
        pascal[i][j] = 1;
      } else {
        pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
      }
    }
  }

  for (int i = 0; i <= power; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << setw(4) << pascal[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}