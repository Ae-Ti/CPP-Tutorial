#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> lst;
  int value;

  for (int i = 0; i < 5; i++) {
    cout << "input integer: ";
    cin >> value;
    lst.push_back(value);
  }

  cout << "forward" << endl;
  list<int>::iterator iter1;
  for (iter1 = lst.begin(); iter1 != lst.end(); iter1++)
    cout << *iter1 << " ";
  cout << endl;

  cout << "backward" << endl;
  list<int>::reverse_iterator iter2;
  for (iter2 = lst.rbegin(); iter2 != lst.rend(); iter2++)
    cout << *iter2 << " ";
  return 0;
}