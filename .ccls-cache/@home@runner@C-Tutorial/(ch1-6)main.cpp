#include <fstream>  // 파일 읽어들이기 ex) ifstream a;
#include <iostream> // 기본 입출력
#include <limits> // 자료형 범위 확인 ex) int a = numeric_limits<int>::max();
#include <string>   // 문자열 자료형 ex) string a;
#include <typeinfo> // 자료형 확인 ex) static_cast<int>(a);

using namespace std;

int maxandplus(int num1, int num2);
int maxandplus(int num1, int num2, int &num3);

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

  double zz = 123;
  cout << showpoint << zz << endl;
  cout << scientific << zz << endl;

  int s1, s2, s3, max, min;
  cout << "s1: ";
  cin >> s1;
  cout << "s2: ";
  cin >> s2;
  cout << "s3: ";
  cin >> s3;

  if (s1 > s2) {
    max = s1;
    min = s2;
  } else {
    max = s2;
    min = s1;
  }
  if (s3 > max) {
    max = s3;
  }
  if (s3 < min) {
    min = s3;
  }
  cout << dec << "Adjust score: " << (max + min) / 2 << endl;

  int count;
  cout << "1~9: ";
  cin >> count;
  switch (count) {
  case 1:
    cout << "hi";
    break;
  case 2:
    cout << "okay";
    break;
  case 3:
    cout << "bye";
    break;
  default:
    cout << "why";
  }
  cout << endl;

  int ii;
  bool flag;

  flag = false;
  cout << "EOF is Ctrl + z" << endl;
  while (cin >> ii && !flag) {
    if (ii >= 150) {
      cout << "찾는 숫자 = " << ii << endl;
      flag = true;
    }
  }
  if (!flag) {
    cout << "there isn't number" << endl;
  }

  int num3 = 9;
  cout << "maxandplus(5,6,7) = " << maxandplus(5, 6, num3) << endl;
  cout << num3 << endl;

  return 0;
}

int maxandplus(int num1, int num2) { return num1 + num2; }

int maxandplus(int num1, int num2, int &num3) {
  num3++;
  if (num1 > num2)
    return num1;
  else
    return num2;
}
