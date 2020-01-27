/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement your class here






//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <iomanip>
int run()
{
    cout << "Add your own tests here" << endl;
    Employee jeff{"Jeff Bezos", 2.347e9};
    cout << "jeff->" << jeff.name() << ", $ "
        << fixed << setprecision(2) << jeff.salary() << endl;
    // Change his salary
    jeff.salary(jeff.salary() / 1.5);
    cout << "jeff->" << jeff.name() << ", $ "
        << fixed << setprecision(2) << jeff.salary() << endl;

    return 0;
}