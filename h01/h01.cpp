/**
 *  Moayd Ghazzawi
 *  02/02/2020
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mghazzawi";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * Give me a time (such as 3:57) and a duration
 * (such as 1:05), and I'll tell you the sum and difference.
 * One line describing what this program does.
 * @return 0 for success.
 */


int run()
{
        // 1. Title and introduction
        cout << STUDENT << " " << ASSIGNMENT << endl;
        cout << "___________________________________________" << endl;
        cout << "Give me a time (such as 3:57) and a duration" << endl;
        cout << "(such as 1:05), and I'll tell you the sum" << endl;
        cout << "(that is, the time that follows the given time" << endl;
        cout << "by the given duration), and differnce (the time that" << endl;
        cout << "precedes the given time by that duration)." << endl;
        cout << endl;
        cout << endl;


    // 2. Input section: prompt and input on same line

        int TIME_HOURS, TIME_MINUTES, DURATION_HOURS, DURATION_MINUTES;
        char discard;

        cout << "Time:" ;
        cin >> TIME_HOURS >> discard >> TIME_MINUTES;




        cout << "Duration:" ;
        cin >> DURATION_HOURS >> discard >> DURATION_MINUTES;
        cout << endl;


    // 3. Processing section - compute the results

    int time, duration, after, before, afterHours, afterMinutes;
    int beforeHours, beforeMinutes;


    time = TIME_HOURS * 60 + TIME_MINUTES;
    duration = DURATION_HOURS * 60 + DURATION_MINUTES;


    after = time + duration;
    before = time - duration;

    afterHours = (after / 60);
    afterMinutes = (after)%60;

    beforeHours = (before/60);
    beforeMinutes = before%60;
cout<< "beforeMinutes -->" << beforeMinutes;



    // - blank line

       cout << endl;


    // 4. Output section: test data inside brackets

        cout << DURATION_HOURS << ":" << DURATION_MINUTES << " hours after, and before, "
            << TIME_HOURS << ":" << TIME_MINUTES

            << setfill('0') << " is ["<< (afterHours + 11)%12+1<< ":" << setw(2) << (afterMinutes + 1440)%60 << ", "
            <<  (beforeHours + 11)%12 + 1<< ":" << setw(2) << (beforeMinutes + 1440)%60<< "]" << endl;



    return 0;
}