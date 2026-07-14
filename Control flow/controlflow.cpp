#include <iostream>

using namespace std;

int main() {
    // Declaring variables for our scenarios
    int age;
    int height;
    int weight;
    int dailySteps;

    // Getting user inputs
    cout << "Enter your Age: ";
    cin >> age;

    cout << "Enter your Height (in feet): ";
    cin >> height;

    cout << "Enter your Weight (in kg): ";
    cin >> weight;

    cout << "Enter your Daily Steps: ";
    cin >> dailySteps;

    cout << "\n--- FITNESS REPORT ---" << endl;

    // =========================================================================
    // 1. IF STATEMENT & 2. IF-ELSE STATEMENT
    // =========================================================================
    // Independent check for age category and gym fee status.
    if (age >= 18) {
        cout << "Status: Adult Gym Member." << endl;
    } else {
        cout << "Status: Junior Gym Member (Parental consent required)." << endl;
    }


    // =========================================================================
    // 3. IF-ELSE IF-ELSE STATEMENT (The Chain)
    // =========================================================================
    // Evaluates daily step counts through mutually exclusive performance tiers.
    cout << "Activity Level: ";
    if (dailySteps >= 10000) {
        cout << "Elite Athlete Tier!" << endl;
    } else if (dailySteps >= 6000) {
        cout << "Moderately Active Tier." << endl;
    } else if (dailySteps >= 3000) {
        cout << "Sedentary Tier (Need to move more)." << endl;
    } else {
        // Catch-all for steps below 3000
        cout << "Couch Potato Tier!" << endl;
    }


    // =========================================================================
    // 4. NESTED IF STATEMENT (Your custom case)
    // =========================================================================
    // Evaluates weight conditions only if the initial height metric passes.
    cout << "Doctor's Advice: ";
    if (height > 5) {
        // Outer IF block executed because height is > 5
        if (weight > 70) {
            // Inner IF: Height > 5 AND Weight > 70
            cout << "you got a good BMI" << endl;
        } 
        else {
            // Inner ELSE: Height > 5 BUT Weight <= 70
            cout << "bhai tujhse na hopaega" << endl;
        }
    } 
    else {
        // Outer ELSE block executed because height is <= 5
        cout << "Complan dila du" << endl;
    }

    return 0;
}