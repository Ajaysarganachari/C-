// Write C++ program to check whether number is palindrome ornot?

// Write a C++ program to convert decimal number to hexadecimal.

// Write a C++ program to print right oriented right angled pyramid.

// 1
// 2 3
// 4 5 6s
// 7 8 9 10
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, original, remainder;

    
    cout << "Enter an integer: ";
    cin >> num;

    original = num; 

    
    while (num > 0) {
        remainder = num % 10;  
        reversed = reversed * 10 + remainder; 
        num /= 10;  
    }

   
    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
//
// #include <iostream>
// #include <iomanip>  // For setting output format

// using namespace std;

// int main() {
//     int num;

//     // Input the decimal number
//     cout << "Enter a decimal number: ";
//     cin >> num;

//     // Display the hexadecimal equivalent
//     cout << "The hexadecimal equivalent of " << num << " is: ";
//     cout << hex << num << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 4;  // Number of rows in the pyramid
//     int num = 1;   // Start number for the pyramid

//     for (int i = 1; i <= rows; i++) {
//         // Print spaces for right alignment
//         for (int j = i; j < rows; j++) {
//             cout << " ";
//         }

//         // Print numbers in each row
//         for (int j = 1; j <= i; j++) {
//             cout << num << " ";
//             num++;  // Increment the number
//         }

//         // Move to the next line after each row
//         cout << endl;
//     }

//     return 0;
// }
