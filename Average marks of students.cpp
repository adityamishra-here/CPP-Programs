#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int numStudents = 50;
    double totalMarks = 0.0;
    double averageMarks;

    // Input marks for each student
    for (int i = 1; i <= numStudents; i++) {
        double marks;
        cout << "Enter marks for student " << i << ": ";
        cin >> marks;

        // Add the entered marks to the total
        totalMarks += marks;
    }

    // Calculate the average marks
    averageMarks = totalMarks / numStudents;

    // Display the result
    cout << "The average marks of " << numStudents << " students is: " << averageMarks << endl;

    return 0;
}
