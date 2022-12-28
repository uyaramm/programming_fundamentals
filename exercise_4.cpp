#include <iostream>
using namespace std;

void printTable(int number) {
  for (int i = 1; i <= 12; i++) {
    cout << number << "*" << i << "=" << number * i << endl;
  }
}

int main() {
  int number;
  cout << "Type a number to get its multiplication table." << endl;
  cin >> number;
  printTable(number);
}