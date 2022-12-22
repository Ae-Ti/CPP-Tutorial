#include <iomanip>
#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> st;

  st.insert(47);
  st.insert(18);
  st.insert(12);
  st.insert(24);
  st.insert(52);
  st.insert(20);
  st.insert(12);
  st.insert(92);
  st.insert(53);

  set<int>::iterator iter;
  for (iter = st.begin(); iter != st.end(); iter++) {
    cout << setw(4) << *iter;
  }
  cout << endl;

  set<int>::reverse_iterator riter;
  for (riter = st.rbegin(); riter != st.rend(); riter++) {
    cout << setw(4) << *riter;
  }
  cout << endl;

  set<int>::iterator iter1 = st.find(52);
  iter1++;
  cout << *iter1 << endl;

  set<int>::iterator iter2 = st.find(20);
  iter2--;
  cout << *iter2 << endl;

  return 0;
}