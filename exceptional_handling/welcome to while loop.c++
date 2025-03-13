#include<iostream>
using namespace std;

int main() {
    int marks = 59; // your marks
    int threshold = 50; // minimum marks required for eligibility
    bool eligible = false;

    // While loop to check eligibility
    while (marks >= threshold) {
        eligible = true; // You are eligible if your marks are >= threshold
        break; // Exit the loop once eligibility is determined
    }

    // Display result
    if (eligible) {
        cout << "You are eligible for the while loop class!" << endl;
    } else {
        cout << "Sorry, you are not eligible for the while loop class." << endl;
    }

    return 0;
}
