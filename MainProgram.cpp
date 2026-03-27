// ============================================================================
//  LAB: Relational & Logical Operators, Conditional Statements
//  Course: CMP1001 – Introduction to Programming (C++)
//  Duration: 60 minutes
//  
//  Description:
//    In this lab you will practice using relational operators (==, !=, <, >,
//    <=, >=), logical operators (&&, ||, !), and conditional statements
//    (if, else if, else, nested ifs). By the end you should be comfortable
//    combining these tools to make decisions in your programs.
//
//  Instructions:
//    1. Read every comment carefully before writing code.
//    2. Look for "// TODO:" markers — that is where YOU write code.
//    3. Compile often:  g++ MainProgram.cpp -o lab && ./lab
//    4. Test each section before moving on.
//    5. Do NOT delete any provided code or comments.
//
//  Reminder: Everything is in ONE file. Do NOT create header files.
// ============================================================================

#include <iostream>
using namespace std;

// ============================================================================
//  SECTION 1 — WARM-UP  (5–10 minutes)
//  Goal: Refresh your memory on cin, cout, variables, and simple arithmetic.
// ============================================================================

void section1_warmup() {
    cout << "=== SECTION 1: WARM-UP ===" << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.1
    // Declare two integer variables, ask the user to enter values for both,
    // then print their sum.
    // -----------------------------------------------------------------------

    // TODO: Declare two int variables (a and b)
    int a , b;
    // TODO: Prompt the user and read both values with cin
    cout <<"Enter Two number";
    cin >> a >> b;
    // TODO: Print "Sum = " followed by the result
    cout << " Sum= " << (a + b);
    
    
    // -----------------------------------------------------------------------
    // Exercise 1.2
    // Ask the user for a temperature in Celsius.
    // Convert it to Fahrenheit using:  F = C * 9/5 + 32
    // Print the result.
    // -----------------------------------------------------------------------

    // TODO: Declare a double variable for Celsius
    double celsius;
    // TODO: Prompt and read the value
    cout << " Enter Temprature in Celsius";
    cin >> celsius;
    // TODO: Calculate Fahrenheit and print it
    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    cout << celsius << "C = " << fahrenheit << " F" << endl;
    cout << endl;
}

// ============================================================================
//  SECTION 2 — CORE CONCEPTS  (10–15 minutes)
//  Topic: Relational operators, logical operators, and if/else basics.
// ============================================================================

void section2_coreConcepts() {
    cout << "=== SECTION 2: CORE CONCEPTS ===" << endl;

    // --- Mini-Reference (read these, do NOT delete) ------------------------
    //
    //  Relational operators compare two values and return true or false:
    //    ==  equal to          !=  not equal to
    //    <   less than         >   greater than
    //    <=  less or equal     >=  greater or equal
    //
    //  Logical operators combine boolean expressions:
    //    &&  AND  — true when BOTH sides are true
    //    ||  OR   — true when AT LEAST ONE side is true
    //    !   NOT  — flips true ↔ false
    //
    //  Conditional statement pattern:
    //    if (condition) {
    //        // runs when condition is true
    //    } else if (anotherCondition) {
    //        // runs when the first is false and this one is true
    //    } else {
    //        // runs when none of the above are true
    //    }
    // -----------------------------------------------------------------------

    // --- Example (study this) ----------------------------------------------
    int age = 20;
    if (age >= 18) {
        cout << "Example: You are an adult." << endl;
    } else {
        cout << "Example: You are a minor." << endl;
    }
    // -----------------------------------------------------------------------

    // --- Example with logical operator (study this) ------------------------
    bool hasID = true;
    if (age >= 18 && hasID) {
        cout << "Example: Access granted." << endl;
    } else {
        cout << "Example: Access denied." << endl;
    }
    cout << endl;
    // -----------------------------------------------------------------------

    // -----------------------------------------------------------------------
    // Exercise 2.1
    // Ask the user for an integer. Print whether it is positive, negative,
    // or zero using if / else if / else.
    // -----------------------------------------------------------------------

    // TODO: Declare an int variable
    int a;
    cout << "Enter Number " << endl;
    cin >> a;
    // TODO: Prompt and read it
    if (a > 0 ) {
        cout << a << "Positive " << endl;
    } else if (a < 0) {
        cout << a <<  "Negative " << endl;
    } else{
        cout << "Zero " << endl;
    }
    // TODO: Use if / else if / else to print the correct message

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 2.2
    // Ask the user for two integers. Using ONLY relational operators and
    // cout, print:
    //   "Equal"        if they are the same
    //   "First is bigger"  if the first is larger
    //   "Second is bigger" otherwise
    // -----------------------------------------------------------------------

    // TODO: Declare two ints, prompt, and read them
    int x , y;
    cout <<"Enter Two number";
    cin >> x >> y;
    
    // TODO: Write the if / else if / else chain
    if (x < y ) {
        cout << "Second number higher than first number " << endl;
    } else if (x > y ) {
        cout << "First number higher than second number" << endl;
    } else {
        cout << "Numbers Equal" << endl;
    } 
    cout << endl;
}

// ============================================================================
//  SECTION 3 — GUIDED EXERCISES  (25–30 minutes)
//  These get progressively harder. Take your time.
// ============================================================================

void section3_guidedExercises() {
    cout << "=== SECTION 3: GUIDED EXERCISES ===" << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.1 — Even or Odd
    // Ask the user for an integer. Print whether it is even or odd.
    int z;
    cout << "enter number " << endl;
    cin >> z;
    // Hint: use the modulus operator (%).
    if(z % 2 == 0) {
        cout << "Number is Even " << endl;
    } else {
        cout << "Number is odd " << endl;
    }
    //   number % 2 == 0  means even.
    // -----------------------------------------------------------------------

    // TODO: Implement the even/odd checker

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.2 — Simple Grade Calculator
    // Ask the user for a numeric score (0–100).
    int gr;
    cout << " enter your grade " << endl;
    cin >> gr;
    if( gr >= 90 && gr <= 100) {
        cout << "Grade=A " <<  endl;
    } if(gr >= 80 && gr <=89) {
        cout << "Grade=B " << endl;
    } if(gr >=  70 && gr <=79) {
        cout << "Grade=C " << endl;
    } if(gr >=  60 && gr <=69) {
        cout << "Grade=D " << endl;
    } if(gr < 60) {
        cout << "F " << endl;
    } else{
        cout <<"invalid score " << endl;
        }
    
    // Print the letter grade using this scale:
    //   90–100 → A
    //   80–89  → B
    //   70–79  → C
    //   60–69  → D
    //   below 60 → F
    //
    // Also print "Invalid score" if the input is < 0 or > 100.
    // -----------------------------------------------------------------------

    // TODO: Implement the grade calculator

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.3 — Leap Year Checker
    // Ask the user for a year (int).
    int year;
    cout <<" Enter Year " << endl;
    cin >> year;
    // A year is a leap year if: << endl;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout <<"It is a Leap Year";
    } else {
        cout << "Not a Leap Year" << endl;
    }
    //   (divisible by 4 AND not divisible by 100)
    //   OR divisible by 400
    //
    // Print whether it is a leap year or not.
    // Hint: you will need both && and || in one condition.
    // -----------------------------------------------------------------------

    // TODO: Implement the leap year checker

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.4 — Triangle Validator
    // Ask the user for three side lengths (doubles).
    double t , y , p;
    cout << "Enter 3 side lenght for triangle " << endl;
    cin >> t >> y >> p;
    if (t + y > p && t + p > y && y + p > t){
        cout << " valid triangle " << endl;
        
        if(t == y && y== p) {
            cout << " Equilateral" << endl;
            
            
        }else if(t == y || t == p || y == p ){
            cout <<"Isosceles" << endl;
        }else{
            cout << "not a valid triangle " << endl;
        }
    }
    
    // A valid triangle must satisfy ALL of:
    //   side1 + side2 > side3
    //   side1 + side3 > side2
    //   side2 + side3 > side1
    //
    // If valid, additionally classify it:
    //   - Equilateral (all sides equal)
    //   - Isosceles   (exactly two sides equal)
    //   - Scalene     (no sides equal)
    //
    // Hint: use nested if statements.
    // -----------------------------------------------------------------------

    // TODO: Implement the triangle validator and classifier

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.5 — Ticket Price Calculator
    // A cinema charges different prices:
    //   - Children (age < 12):       $5
    //   - Students (age 12–24):      $8
    //   - Adults  (age 25–64):       $12
    //   - Seniors (age >= 65):       $7
    //
    // Additional rules:
    //   - If it is a weekday (user enters 'W') everyone gets $2 off.
    //   - If it is a weekend (user enters 'E') no discount.
    //
    // Ask for the customer's age and day type ('W' or 'E').
    // Print the final ticket price.
    // Hint: calculate base price first, then apply discount.
    // -----------------------------------------------------------------------

    // TODO: Implement the ticket price calculator

    cout << endl;
}

// ============================================================================
//  SECTION 4 — CHALLENGE  (10 minutes)
//  Push yourself! These are a bit harder and more open-ended.
// ============================================================================

void section4_challenge() {
    cout << "=== SECTION 4: CHALLENGE ===" << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.1 — Mini Login System
    //
    // Simulate a simple login:
    //   - The correct username is "admin" and the correct PIN is 1234.
    //   - Ask the user to enter a username (string) and a PIN (int).
    //   - If BOTH match → print "Login successful!"
    //   - If the username is wrong → print "Unknown user."
    //   - If the username is right but PIN is wrong →
    //       print "Incorrect PIN."
    //
    // Think carefully about the ORDER of your checks.
    // -----------------------------------------------------------------------

    // TODO: Implement the mini login system

    cout << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.2 — Body Mass Index (BMI) Advisor
    //
    // Ask the user for their weight in kg and height in meters.
    // Calculate BMI = weight / (height * height)
    //
    // Print the BMI value AND the category:
    //   BMI < 18.5          → Underweight
    //   18.5 <= BMI < 25.0  → Normal weight
    //   25.0 <= BMI < 30.0  → Overweight
    //   BMI >= 30.0         → Obese
    //
    // Also handle invalid input:
    //   - weight <= 0 or height <= 0 → print "Invalid input"
    // -----------------------------------------------------------------------

    // TODO: Implement the BMI advisor

    cout << endl;
}

// ============================================================================
//  MAIN — calls each section in order
// ============================================================================

int main() {
    cout << "============================================" << endl;
    cout << "  CMP1001 Lab: Relational & Logical Ops    " << endl;
    cout << "  Conditional Statements                   " << endl;
    cout << "============================================" << endl << endl;

    section1_warmup();
    section2_coreConcepts();
    section3_guidedExercises();
    section4_challenge();

    cout << "============================================" << endl;
    cout << "  Lab complete. Don't forget to submit!    " << endl;
    cout << "============================================" << endl;

    return 0;
}
