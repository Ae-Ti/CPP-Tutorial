#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<char> stk;
  string converter("0123456789ABCDEF");
  string hexadecimal;
  int decimal;

  do {
    cout << "input positive number: ";
    cin >> decimal;
  } while (decimal <= 0);

  while (decimal != 0) {
    stk.push(converter[decimal % 16]);
    decimal = decimal / 16;
  }

  while (!stk.empty()) {
    hexadecimal.push_back(stk.top());
    stk.pop();
  }
  cout << "is " << hexadecimal;
  return 0;
}