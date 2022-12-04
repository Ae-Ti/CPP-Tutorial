#include <iostream>
#include <string>
using namespace std;

void pushFront(string &strg, char c) {
  string temp(1, c);
  strg.insert(0, temp);
}

void pushBack(string &strg, char c) {
  string temp(1, c);
  strg.append(temp);
}

char popFront(string &strg) {
  int index = 0;
  char temp = strg[index];
  strg.erase(index, 1);
  return temp;
}

char popBack(string &strg) {
  int index = strg.size() - 1;
  char temp = strg[index];
  strg.erase(index, 1);
  return temp;
}

int main() {
  string strg("abcefgh");
  cout << strg << endl;
  pushFront(strg, 'A');
  cout << strg << endl;
  pushBack(strg, 'Z');
  cout << strg << endl;
  popFront(strg);
  cout << strg << endl;
  popBack(strg);
  cout << strg << endl;

  return 0;
}