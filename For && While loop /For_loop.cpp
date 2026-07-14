#include <iostream>
using namespace std;
int main() {
    // ==========================================
    // 1. THE FOR LOOP
    // ==========================================
    /*
     * SYNTAX:
     * for (initialization; condition; update) {
     * // Code to be executed repeatedly
     * }
     * * HOW IT WORKS:
     * - initialization: Executes once at the start (usually sets a counter).
     * - condition: Evaluated before each iteration. If true, the loop runs. If false, the loop ends.
     * - update: Executes at the end of each iteration (usually increments/decrements the counter).
     */
    
    cout << "--- For Loop Example ---" << endl;
    
    // Prints numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << "For loop iteration: " << i << endl;
    }

    cout << endl; // Print a blank line for spacing

    // ==========================================
    // 2. THE WHILE LOOP
    // ==========================================
    /*
     * SYNTAX:
     * initialization; // Done outside the loop
     * while (condition) {
     * // Code to be executed repeatedly
     * // update; // Must change the condition variable inside the loop
     * }
     * * HOW IT WORKS:
     * - Checks the condition first.
     * - If the condition is true, it executes the code block.
     * - Crucial: You must update the condition variable inside the block, 
     * otherwise you will create an infinite loop.
     */
    
    cout << "--- While Loop Example ---" << endl;
    
    int j = 1; // Initialization
    
    // Prints numbers from 1 to 5
    while (j <= 5) {
        cout << "While loop iteration: " << j << endl;
        j++; // Update step (increment j by 1)
    }

    return 0;
}