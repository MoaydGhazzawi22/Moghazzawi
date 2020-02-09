/**
 *  @author Moayd Ghazzawi
 *  @date 2/8/2020
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "mghazzawi";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here

string getStatus(double gpa, int credits, int honorsCredits);

/**
 * Describe the purpose of your program here.
 * Given the following, student GPA, total credit count, and honors credit (Input)
 * The total credit count already includes the honors credits.
 *
 * Declear and define function getStatus()
 *
 * students must complete at least 180 credits with gpa 2.0 to graduate
 * else should receive "not graduating"
 *
 * student who do have enugh credit to graduate and high gpa will receive one of four return values
 * depending on the GPA and number of honors credit
 *
 * if students have gpa between 2.0 and 3.6 receive return value "graduating"
 *
 * else if student with fewer than 15 honors credit receive "cum laude" if the gpa 3.6 but less than 3.8
 * and return of "magna cum laude" if their gpa 3.8
 *
 * else if students with 15 or more honors credit receive "magna cum laude" if their gpa 3.6 but less than 3.8 and
 * return "summa cum laude" if their gpa at least 3.8
 *
 * Assuming that gpa will be between 0.0 and 4.0 and that both credit counts will be non-negative integers
 * @return 0 for success.
 */
int run()
{
    // DON'T CHANGE ANYTHING IN THIS FUNCTION
    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Enter gpa, total credits and honors credits: ";
    double gpa;
    int credits, honorsCredits;
    cin >> gpa >> credits >> honorsCredits;

    // You will write this function
    string result = getStatus(gpa, credits, honorsCredits);

    cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
string getStatus(double gpa, int credits, int honorsCredits) {
    string result;
    if (gpa < 2.0 || credits < 180) {
        result = "not graduating";
    }
    else if (gpa >= 2.0 && gpa <= 3.6 && credits >= 180) {
        result = "graduating";
    }
    else if (honorsCredits < 15 && gpa >= 3.6 && gpa < 3.8 && credits >=180) {
        result = "cum laude";
    }
    else if (honorsCredits < 15 && gpa == 3.8 && credits >= 180) {
        result = "magna cum laude";
    }
    else if (honorsCredits >= 15 && gpa >= 3.6 && gpa < 3.8 && credits >= 180) {
        result = "magna cum laude";
    }
    else if (honorsCredits >= 15 && gpa >= 3.8 && credits >= 180) {
        result = "summa cum laude";
    }
    else {
        result = "Invalid input";
    }
        return result;
}
