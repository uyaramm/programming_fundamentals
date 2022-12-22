#include <iostream>
using namespace std;

/*Write a program that asks the user for a number n and gives them the
 * possibility to choose between computing the sum and computing the product of
 * 1,…,n.*/

int getSum(int number) {
  int sum = 0;
  for (int i = 1; i <= number; i++) {
    sum += i;
  }
  return sum;
}

int getProduct(int number) {
  int product = 1;
  for (int i = 1; i <= number; i++) {
    product *= i;
  }
  return product;
}

void userOptionInput() {
  char option;
  int number;
  cout << "Type a number: " << endl;
  cin >> number;
  cout << "Choose [+] to get the sum or [*] to get the product: ";
  cin >> option;
  if (option == '+') {
    int sum = getSum(number);
    cout << "The sum of numbers betwwen 1 and " << number << " is: " << sum
         << endl;
  } else if (option == '*') {
    int product = getProduct(number);
    cout << "The product of numbers betwwen 1 and " << number
         << " is: " << product << endl;
  }
}

void executeTest() {
  cout << "N = 5, Sum = 15, Product = 120, Result Sum: " << getSum(5)
       << ", Result Product: " << getProduct(5) << endl;
  cout << "N = 10, Sum = 55, Product = 3628800, Result Sum: " << getSum(10)
       << ", Result Product: " << getProduct(10) << endl;
}

void executeUserOption(int option) {
  switch (option) {
  case 1:
    executeTest();
    break;

  case 2:
    userOptionInput();
    break;

  case 3:
    cout << "It's over";
    break;
  }
}

int main() {
  int option;

  do {
    cout << "Choose [1] for test: " << endl;
    cout << "Choose [2] for execute: " << endl;
    cout << "Choose [3] for exit: " << endl;
    cin >> option;

    executeUserOption(option);
  } while (option != 3);
}