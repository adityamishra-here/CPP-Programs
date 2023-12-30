#include<iostream>
using namespace std;

inline void printSum(int num1,int num2) {
cout << num1 + num2 <<endl;
}
int main() {

printSum(10, 20); // first call // call the inline function
printSum(2, 5); // second call
printSum(100, 400); // third call
return 0;
}


/*
30
7
500


Absolutely, here's a more concise breakdown:

- Purpose: Inline functions in C++ speed up programs by avoiding the usual setup time for function calls.
- Benefit: They enhance performance, especially for small functions, by directly inserting their code where they're called.
- Advantage: By skipping the usual process, they reduce execution time and improve overall program speed.
- Usage: Inline functions are handy for small, frequently used functions and can be used with C++ classes.

  */
