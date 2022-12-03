#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  const int CAPACITY = 10;
  int frequencies[CAPACITY] = {0};
  ifstream integerFile;

  integerFile.open("integerFile.dat");
  if (!integerFile) {
    cout << "file can\'t be open : 프로그램 중단" << endl;
    return 0;
  }

  int data;
  int size = 0;
  while (integerFile >> data) {
    if (data >= 0 && data <= 9) {
      size++;
      frequencies[data]++;
    }
  }
  integerFile.close();

  cout << size << "data" << endl;

  for (int i = 0; i < 10; i++) {
    cout << setw(3) << i << " ";

    for (int f = 1; f <= frequencies[i]; f++) {
      cout << '*';
    }
    cout << " frequencies[i]" << endl;
  }
  return 0;
}