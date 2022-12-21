#include <iostream>
using namespace std;

/* Write a program that asks the user for a number n and prints the sum of the
 numbers 1 to n*/

int getSum(int number) {
  int i;
  int sum = 0;
  for (i = 0; i <= number; i++) {
    sum += i;
  }
  return sum;
}

void executeTest() {
  cout << "N = 3, expected = 6, result=  " << getSum(3) << endl;
  cout << "N = 10, expected = 55, result=  " << getSum(10) << endl;
}

void sumWithUserInput() {
  int number;
  cout << "Type a number: ";
  cin >> number;
  cout << "The sum of the following " << number
       << " numbers is : " << getSum(number) << endl;
}

void executeUserChoice(int number) {
  if (number == 1) {
    executeTest();
  } else if (number == 2) {
    sumWithUserInput();
  }
}

int main() {
  int number, choice;

  do {
    cout << "Type [1] for executing test: " << endl
         << "Type [2] for to enter a value: " << endl
         << "Type [3] to end the program: " << endl;
    cin >> choice;
    executeUserChoice(choice);
  } while (choice != 3);
}