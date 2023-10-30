//i39/2671/2020  Ronald mwendwa
//IDE visual studio
#include <stdio.h>
// Functional Programming Example in C
// This code calculates the sum of squares using recursion.

// Define a function named sum_of_squares that takes an integer n as a parameter
int sum_of_squares(int n) {
    // Check if n is equal to 1
    if (n == 1) {
        // If n is 1, return 1
        return 1;
    }
    // If n is not 1, calculate n * n (the square of n)
    // and add it to the result of the sum_of_squares function called with n - 1
    return n * n + sum_of_squares(n - 1);
}

// Define the main function, the entry point of the program
int main() {
    // Declare an integer array named numbers and initialize it with values
    int numbers[] = {1, 2, 3, 4, 5};
    
    // Call the sum_of_squares function with the argument and store the result in the variable result
    int result = sum_of_squares(5);
    
    //  print a formatted message with the calculated result
    printf("The sum of squares is: %d\n", result);
    
    // Return 0 to indicate successful program execution
    return 0;
}