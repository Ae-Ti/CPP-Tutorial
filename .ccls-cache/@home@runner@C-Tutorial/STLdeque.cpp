#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void print(deque<string> deq) {
  for (int i = 0; i < deq.size(); i++) {
    cout << deq.at(i) << " ";
  }
  cout << endl;
}

int main() {
  deque<string> deq(7);
  string arr[5] = {"j", "m", "r", "t", "s"};
  for (int i = 0; i < 5; i++) {
    deq[i] = arr[i];
  }
  print(deq);

  deq.push_back(deq.front());
  deq.pop_front();
  print(deq);

  deq.push_front(deq.back());
  deq.pop_back();
  print(deq);
  return 0;
}