//Ronald mwendwa i39/2671/2020
#include <stdio.h>

// Structured Programming Example 
// This code calculates the factorial of a number using a loop.

int factorial(int n) {
//This line defines a function named factorial.
    // The function takes an integer n as a parameter, and it's expected to return an integer.
    int result = 1;
    //this line declares and initializes an integer variable named result
    for (int i = 1; i <= n; i++) {
    //This line starts a for loop. It initializes an integer variable i with the value 1
        result *= i;
    }
    return result;
    //After the loop completes, this line returns the calculated result as the result of the factorial function
     }
int main() {
//This line defines the main function
    int number = 5;
    printf("The factorial of %d is %d\n", number, factorial(number));
    //This line uses the printf function to print a formatted message.
    return 0;
    //This line returns an integer value of 0, indicating that the program has executed without errors. 
}