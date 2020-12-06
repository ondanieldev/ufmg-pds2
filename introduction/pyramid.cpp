#include <iostream>

using namespace std;

int main() {
  int height;
  cout << "Insira a altura da pirâmide: ";
  cin >> height;
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j <= i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = height - 1; i > 0; --i) {
    for (int j = i; j > 0; --j) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}