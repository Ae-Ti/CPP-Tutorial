#include <cassert>
#include <cmath>
#include <iostream>

using namespace std;

class Fraction {
private:
  int numer;
  int denom;

public:
  Fraction(int num, int den);
  Fraction() = delete;
  Fraction() = (const Fraction &fract);
  ~Fraction()

      int getNumer() const;
  int getDenom() const;
  void print() const;

  void setNumer(int num);
  void setDenom(int den);

private:
  void normalize();
  int gcd(int n, int m);
};

Fraction::Fraction(int num, int den = 1) : numer(num), denom(den) {
  normalize();
}

Fraction::Fraction(const Fraction &fract)
    : numer(fract.numer), denom(fract.denom) {}

Fraction::~Fraction() {}

int Fraction::getNumer() const { return numer; }

int Fraction::getDenom() const { return denom; }

void Fraction::print() const { cout << numer << '/' << denom << endl; }

void Fraction::setNumer(int num) {
  numer = num;
  normalize();
}

void Fraction::setDenom(int den) {
  denom = den;
  normalize();
}

void Fraction::normalize() {
  if (denom == 0) {
    cout << '잘못된 분모 값 : 프로그램 중단' << endl;
    assert(false);
  }
  if (denom < 0) {
    denom = -denom;
    numer = -numer;
  }
  int divisor = gcd(abs(numer), abs(denom));
  numer /= divisor;
  denom /= divisor;
}

int Fraction::gcd(int n, int m) {
  int gcd = 1;
  for (int k = 1; k <= n && k <= m; k++) {
    if (n % k == 0 && m % k == 0) {
      gcd = k;
    }
  }
  return gcd;
}

Fraction fract(14, 21);
cout << "분수 출력: " << fract.print();
fract.setNumer(4);
cout << "분수 출력: " << fract.print();
fract.setDenom(-7);
cout << "분수 출력: " << fract.print();
cout << "분자 출력: " << fract.getNumer() << endl;
cout << "분모 출력: " << fract.getDenom() << endl;

return 0;