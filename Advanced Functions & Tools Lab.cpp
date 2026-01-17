/* Lab: Advanced Functional Programming and Bitwise Logic */
#include <iostream>

// Function Overloading
int Sum(int a, int b) { return a + b; }
double Sum(double a, double b) { return a + b; }

// Recursion
void PrintCountdown(int n) {
    if (n > 0) {
        std::cout << n << "\n";
        PrintCountdown(n - 1);
    }
}

// Static Variables
void CallCounter() {
    static int count = 0;
    count++;
    std::cout << "Call count: " << count << "\n";
}

int main() {
    // Ternary Operator
    int age = 19;
    std::string status = (age >= 18) ? "Adult" : "Minor";

    // Bitwise Logic
    int bit1 = 12, bit2 = 25;
    std::cout << "AND: " << (bit1 & bit2) << "\n";
    std::cout << "OR: " << (bit1 | bit2) << "\n";

    // Calls
    PrintCountdown(3);
    CallCounter();
    CallCounter();

    return 0;
}