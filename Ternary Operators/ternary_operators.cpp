#include <iostream>
#include <string>

using namespace std;

int main() {
    // =========================================================================
    // WHAT IS A TERNARY OPERATOR?
    // =========================================================================
    // The ternary operator (also known as the conditional operator) is a shorthand 
    // way of writing an 'if-else' statement. It is the only operator in C++ that 
    // takes three arguments.
    //
    // Syntax:
    // (condition) ? expression_if_true : expression_if_false;


    // -------------------------------------------------------------------------
    // EXAMPLE 1: Basic Shorthand for If-Else (Finding Maximum)
    // -------------------------------------------------------------------------
    int num1 = 45;
    int num2 = 72;
    
    // Traditional If-Else Approach:
    /*
    int max;
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    */

    // Equivalent Ternary Operator Approach:
    // It checks if num1 > num2. Since it's false, 'num2' is assigned to 'max'.
    int max = (num1 > num2) ? num1 : num2;

    cout << "Example 1:" << endl;
    cout << "The larger number between " << num1 << " and " << num2 << " is: " << max << endl;
    cout << "---------------------------------------------------------" << endl;


    // -------------------------------------------------------------------------
    // EXAMPLE 2: Direct Use Inside Output Streams (Checking Pass/Fail)
    // -------------------------------------------------------------------------
    int examScore = 65;
    int passingMarks = 70;

    cout << "Example 2:" << endl;
    // You can embed a ternary operator directly inside a cout statement.
    // Note: Always wrap the entire ternary expression in parentheses when using cout.
    cout << "Exam Result: " << ((examScore >= passingMarks) ? "PASSED" : "FAILED") << endl;
    cout << "---------------------------------------------------------" << endl;


    // -------------------------------------------------------------------------
    // EXAMPLE 3: Nested Ternary Operator (Alternative to If-Else If-Else)
    // -------------------------------------------------------------------------
    // You can nest ternary operators to check multiple conditions, though it's 
    // recommended to use them sparingly as they can become harder to read.
    int number = -15;

    // This checks: Is it greater than 0? 
    // If yes -> returns "Positive"
    // If no  -> enters a second check: Is it less than 0? 
    //           If yes -> returns "Negative"
    //           If no  -> returns "Zero"
    string result = (number > 0) ? "Positive" : ((number < 0) ? "Negative" : "Zero");

    cout << "Example 3:" << endl;
    cout << "The number " << number << " is " << result << "." << endl;
    cout << "---------------------------------------------------------" << endl;

    return 0;
}