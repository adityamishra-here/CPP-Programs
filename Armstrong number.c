#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, sum = 0, temp, digit;

    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}


/*

1 OUTPUT:
Enter a number: 153
153 is an Armstrong number.


2 OUTPUT:
Enter a number: 5
5 is not an Armstrong number.

  */
