#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int maxPower = 10;
  int n;

  do {
    cout << "Input n in (x+y)^n: ";
    cin >> n;
  } while (n < 0 || n > maxPower);

  int **pascal = new int *[n + 1];

  for (int i = 0; i < n + 1; i++) {
    pascal[i] = new int[i];
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || i == j) {
        pascal[i][j] = 1;
      } else {
        pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
      }
    }
  }
  cout << "(x+y)^" << n << "의 이항계수: ";
  for (int j = 0; j <= n; j++) {
    cout << setw(5) << pascal[n][j];
  }
  cout << endl;
  for (int i = 0; i < n + 1; i++) {
    delete[] pascal[i];
  }
  delete[] pascal;
  return 0;
}