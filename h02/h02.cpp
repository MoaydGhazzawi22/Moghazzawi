/**
 *  Moayd Ghazzawi
 *  02/02/2020
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mghazzawi";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * This program will determine how much diet soda
 * can be consumed safely.  The program will ask for
 * the dieter's target weight to calculate the amount of
 * diet soda the patient can safely drink.
 * @return 0 for success.
 */

     const double artificialSweetenerPerCan = 35.0;
     const double poundPerGram = 454.0;
     double mouseWeightInGrams;

     double lethalDoseMouseInGrams;
     double dieterWeightInPounds;
     double dieterWeightInGrams;

     double lethalDoseforFriend;
     double numberOfCans;

     //Input section

int run()
{

    cout <<" Please enter the weight of the mouse in grams: ";
    cin >> mouseWeightInGrams;
    cout <<" Please enter the Lethal dose for the mouse (in grams): ";
    cin >> lethalDoseMouseInGrams;
    cout << " Please enter the desired weight of the dieter (in pounds): ";
    cin >>  dieterWeightInPounds;

    //Output section

    dieterWeightInGrams = poundPerGram * dieterWeightInPounds;
    lethalDoseforFriend = (dieterWeightInGrams / mouseWeightInGrams) * lethalDoseMouseInGrams;
    numberOfCans = (lethalDoseforFriend / artificialSweetenerPerCan) * 100;

    cout << "Lethal dose in grams, cans is [" << lethalDoseforFriend << fixed << setprecision(0) << ",]";

    return 0;
}