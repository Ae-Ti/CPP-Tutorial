#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> line;

  line.push(4);
  line.push(7);
  line.push(2);
  line.push(6);
  line.push(8);
  line.push(7);
  line.push(2);

  while (!line.empty()) {
    cout << line.top() << " ";
    line.pop();
  }
  return 0;
}