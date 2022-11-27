#include <iostream> // 기본 입출력
#include <limits> // 자료형 범위 확인 ex) int a = numeric_limits<int>::max();
#include <string>   // 문자열 자료형 ex)string a;
#include <typeinfo> // 자료형 확인 ex)static_cast<int>(a);

using namespace std;

int main() {
  /*std::cout << "Hello World!\n";
  std::cout << endl;
  int num1, num2, sum;
  std::cout << "num1: ";
  cin >> num1;
  std::cout << "num2: ";
  cin >> num2;
  sum = num1 + num2;
  cout << "두 숫자의 합: " << sum;
  cout << endl; */

  double a = 24;
  cout << a;
  cout << endl;

  string b = "bye";
  cout << b;
  cout << endl;
  cout << sizeof(b);
  cout << endl;

  cout << "*";
  cout << endl;
  cout << "**";
  cout << endl;
  cout << "***";
  cout << endl;

  bool x = true;
  cout << "x+100 = " << x + 100;
  cout << endl;
  cout << "x+100의 자료형 :" << typeid(x + 100).name();
  cout << endl;

  int y = 140;
  double z = 114.56;
  cout << typeid(y + z).name();
  cout << endl;
  cout << typeid(y = 140.56).name();
  cout << endl;
  cout << "캐스팅한 경우 z: " << static_cast<int>(z);
  cout << endl;

  int limitint = numeric_limits<int>::max();
  cout << limitint << endl;
  limitint += 1;
  cout << limitint << endl;

  bool booo = false;
  cout << booo << endl;
  cout << boolalpha << booo << endl;
  cout << showbase << hex << y << endl;

  const double zz = 123;
  cout << showpoint << zz << endl;
  cout << scientific << zz << endl;
}