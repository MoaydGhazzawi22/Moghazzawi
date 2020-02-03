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
 * Give me a time and a duration
 *  and I will tell you the sum and difference.
 *
 * One line describing what this program does.
 * @return 0 for success.
 */


int run()
{
        int time, duration, after, before, afterHours, afterMinutes;
        int beforeHours, beforeMinutes;
        int timeHours, timeMinutes, durationHours, durationMinutes;
        char dCard;
        cout << "Give me a time (such as 3:57) and a duration" << endl;
        cout << "(such as 1:05), and I'll tell you the sum" << endl;
        cout << "(that is, the time that follows the given time" << endl;
        cout << "by the given duration), and differnce (the time that" << endl;
        cout << "precedes the given time by that duration)." << endl;
        cout << endl;
        cout << endl;



        cout << "Time:" ;
        cin >> timeHours >> dCard >> timeMinutes;




        cout << "Duration:" ;
        cin >> durationHours >> dCard >> durationMinutes;
        cout << endl;




          time = timeHours * 60 + timeMinutes;
        duration = durationHours * 60 + durationMinutes;


         after = time + duration;
          before = time - duration;

          afterHours = (after / 60);
          afterMinutes = (after)%60;

        beforeHours = (before/60 + 11) % 12 + 1;
        beforeMinutes = before%60;
          cout<< "beforeMinutes -->" << beforeMinutes;

       cout << endl;

        cout << durationHours << ":" << durationMinutes << " hours after, and before, "
            << timeHours << ":" << timeMinutes

            << setfill('0') << " is ["<< (afterHours + 11)%12+1<< ":" << setw(2) << (afterMinutes + 1440)%60 << ", "
            <<  (beforeHours + 11)%12 + 1<< ":" << setw(2) << (beforeMinutes + 1440)%60<< "]" << endl;



    return 0;
}