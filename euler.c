// CS2211a 2023, Section 1
// Assignment 4
// Victor Tan
// 251 222 810
// VTAN29
// 2023/11/15

#include <stdio.h>

// Recursive function to calculate the factorial of a given integer
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to approximate the value of e using the specified epsilon
double calculate_e(double epsilon) {
    // Initialize variables
    double e = 1.0;
    int n = 1;

    // Iterate until the term becomes smaller than epsilon
    while (1) {
        double term = 1.0 / factorial(n);

        // Check if the term is smaller than epsilon
        if (term < epsilon) {
            break;
        }

        // Update the value of e and increment n
        e += term;
        n++;
    }

    // Return the calculated approximation of e
    return e;
}

// Main function
int main() {
    double epsilon;

    // Prompt user for epsilon value
    printf("Enter a small number (epsilon): ");
    scanf("%lf", &epsilon);

    // Calculate and print the value of e
    double result = calculate_e(epsilon);
    printf("Approximation of e with epsilon %.13lf: %.13lf\n", epsilon, result);

    return 0;
}
