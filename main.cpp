#include <iostream>
#include <string>

using namespace std;

int main() {
  std::cout << "Hello World!\n";
  std::cout << endl;
  int num1, num2, sum;
  std::cout << "num1: ";
  cin >> num1;
  std::cout << "num2: ";
  cin >> num2;
  sum = num1 + num2;
  cout << "두 숫자의 합: " << sum;

  cout << endl;
  double a = 24;
  cout << a;

  cout << endl;

  string b = "bye";
  cout << b;
  cout << endl;

  cout << "*";
  cout << endl;
  cout << "**";
  cout << endl;
  cout << "***";
  cout << endl;
}