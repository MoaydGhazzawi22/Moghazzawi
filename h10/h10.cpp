/**
 *  @author Moayd Ghazzawi
 *  @date 2/26/2020
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "mghazzawi"; // Add your Canvas/occ-email ID

#include "h10.h"

// Place your function definitions in this file.
bool read(const string& str, int& age, bool ageb = false)
{
    cout << "How old are you?";
    cin >> age;
    return false;
}
bool read(const string& str, double& gpa, bool gpab = false)
{
    cout << "What is your gpa?";
    cin >> gpa;
    return false;
}
bool read(const string& str, string& name, bool nameb = false)
{
    cout << "What is your full name?";
    getline(cin, name);
    return false;
}
bool read(char& a, char sentinel)
{
    return false;
}


////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

     int age;
     if (read("How old are you? ", age))
         cout << "You don't look " << age << " years old!" << endl;
     else
         cout << "Hmm. Doesn't look like you entered an int." << endl;

     double gpa;
     if (read("What is your gpa? ", gpa, true))
        cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
     else
         cout << "Sorry. I can't understand what you typed." << endl;

     string name;
     if (read("What is your full name? ", name, true))
         cout << "Hi " << name << ". Glad to meet you." << endl;
     else
         cout << "Hmm. Is that your FULL name?" << endl;

     cout << "Type a sentence ending in a period: ";
     char ch;
     while (read(ch, '.')) cout << ch;
     cout << "." << endl;

    return 0;
}

