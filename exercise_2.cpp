
#include <iostream>
using namespace std;

/*Write a program that asks the user for a number n and prints the sum of the
numbers 1 to n. However, only multiples of three or five are considered in the
sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17*/

int getSum(int number) {
  int sum = 0;

  for (int i = 0; i <= number; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

void executeTest() {
  cout << "N= 5, expected sum = 8. Result= " << getSum(5) << endl;
  cout << "N= 10, expected sum = 33. Result=  " << getSum(10) << endl;
}

void sumWithUserInput() {
  int number, sum;

  cout << "Type a number and I'll give you the sum of of three or five: "
       << endl;
  cin >> number;

  sum = getSum(number);
  cout << "The sum of the multiple of three and five is: " << sum << endl;
}

void executeUserChoice(int choice) {

  switch (choice) {
  case 1:
    executeTest();
    break;

  case 2:
    sumWithUserInput();
    break;

  case 3:
    cout << "over";
    break;
  }
}

int main() {
  int choice;
  do {
    cout << "Type [1] for test: " << endl;
    cout << "Type [2] for execute the sum: " << endl;
    cout << "Type [3] to exit: " << endl;
    cin >> choice;
    executeUserChoice(choice);
  } while (choice != 3);
}
