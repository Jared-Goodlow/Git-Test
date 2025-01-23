#include <iostream>
using namespace std;

int sum(int n) {
  int total = 0;
  for (int i = 1; i <= n; i++) {
    total += i;
  }

  return total;
}

int product(int n) {
  int prod = 1;
  for (int i = 1; i <= n; i++) {
    prod *= i;
  }

  return prod;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int result = sum(n);
  cout << "The sum of the numbers from 1 to " << n << " is: " << result << endl;

  int result2 = product(n);
  cout << "The product of the numbers from 1 to " << n << " is: " << result2 << endl;
  

  return 0;
}
