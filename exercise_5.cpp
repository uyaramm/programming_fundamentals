/*Write a program that prints all prime numbers.*/

#include <iostream>
using namespace std;

bool isPrime(int number) {
  for (int i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

void printPrimeNumber(int number) {
  for (int i = 2; i <= number; i++) {
    if (isPrime(i)) {
      cout << "Is prime: " << i << endl;
    }
  }
}

int main() {
  int number;
  cout << "Type a number: ";
  cin >> number;
  printPrimeNumber(number);
}