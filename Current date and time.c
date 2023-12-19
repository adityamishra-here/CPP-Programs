#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the current time using the time function
    time_t currentTime = time(nullptr);

    // Convert the current time to the local time
    tm* localTime = localtime(&currentTime);

    // Display the current date and time
    cout << "Current Date and Time: ";

    // Display date in the format: MM-DD-YYYY
    cout << localTime->tm_mon + 1 << "-" << localTime->tm_mday << "-" << localTime->tm_year + 1900 << " ";

    // Display time in the format: HH:MM:SS
    cout << localTime->tm_hour << ":" << localTime->tm_min << ":" << localTime->tm_sec << endl;

    return 0;
}
