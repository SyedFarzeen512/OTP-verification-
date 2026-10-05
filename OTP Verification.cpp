#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Generate random seed

    // Generate 4-digit OTP
    int otp = rand() % 9000 + 1000;

    cout << "===== OTP Verification System =====\n";
    cout << "Generated OTP: " << otp << endl; // For testing

    int userOTP;
    int attempts = 3;

    while (attempts > 0) {
        cout << "\nEnter OTP: ";
        cin >> userOTP;

        if (userOTP == otp) {
            cout << "OTP Verified Successfully!\n";
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Incorrect OTP! Attempts left: "
                     << attempts << endl;
            } else {
                cout << "Verification Failed! No attempts left.\n";
            }
        }
    }

    return 0;
}