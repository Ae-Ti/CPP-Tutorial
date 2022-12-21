#include <cstdlib>
#include <ctime>
#include <iostream>
#include <queue>

using namespace std;
void print(queue<int> queue);

int main() {
  queue<int> queue1, queue2, queue3, queue4, queue5;
  int num;
  int donation;

  srand(time(0));
  for (int i = 0; i < 50; i++) {
    num = rand();
    donation = num % (50);
    switch (donation / 10) {
    case 0:
      queue1.push(donation);
      break;
    case 1:
      queue2.push(donation);
      break;
    case 2:
      queue3.push(donation);
      break;
    case 3:
      queue4.push(donation);
      break;
    case 4:
      queue5.push(donation);
      break;
    }
  }
  cout << "0~9: ";
  print(queue1);
  cout << "10~19: ";
  print(queue2);
  cout << "20~29: ";
  print(queue3);
  cout << "30~39: ";
  print(queue4);
  cout << "40~49: ";
  print(queue5);
  return 0;
}

void print(queue<int> queue) {
  while (!queue.empty()) {
    cout << queue.front() << " ";
    queue.pop();
  }
  cout << endl;
}