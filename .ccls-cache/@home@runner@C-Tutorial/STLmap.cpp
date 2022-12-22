#include <iomanip>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
  map<string, int> scores;
  map<string, int>::iterator iter;

  scores["j"] = 52;
  scores["g"] = 77;
  scores["m"] = 88;
  scores["l"] = 98;
  scores["r"] = 77;

  for (iter = scores.begin(); iter != scores.end(); iter++) {
    cout << setw(3) << left << iter->first << " ";
    cout << setw(4) << iter->second << endl;
  }
  return 0;
}