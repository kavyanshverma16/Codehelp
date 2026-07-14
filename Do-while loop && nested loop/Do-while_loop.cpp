#include <iostream>
using namespace std;
int main() {
    // =========================================================================
    // THE DO-WHILE LOOP IN C++
    // =========================================================================
    // Core Characteristic: It is an "exit-controlled" loop.
    // Unlike a standard 'while' loop, the condition is checked AT THE END 
    // of the loop body. This guarantees that the code block inside the 'do' 
    // executes AT LEAST ONCE, regardless of whether the condition is true or false.
    // =========================================================================

    cout << "--- Example 1: Condition is false from the start ---" << endl;

    int count = 10;

    do {
        // This block will execute exactly once, even though (count < 5) is false.
        cout << "This line always prints! Current count: " << count << endl;
        count++; 
    } while (count < 5); // Condition is checked HERE. 11 < 5 is false -> Loop terminates.

     cout << "Loop 1 finished. Execution moved past the loop." << endl << endl;


    cout << "--- Example 2: Normal execution (multiple iterations) ---" << endl;

    int i = 1;

    do {
        // 1st iteration: prints 1 (guaranteed)
        // 2nd iteration: prints 2
        // 3rd iteration: prints 3
        cout << "Iteration number: " << i << endl;
        i++; 
    } while (i <= 3); // Checks condition: loop continues as long as i is 3 or less.

    cout << "Loop 2 finished." << endl;

    return 0;
}