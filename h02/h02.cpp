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
This program will help us to know how much diet soda it is possible to drink without dying as a result.

 * @return 0 for success.
 */




     //Input section

int run()
{
    const int gramsPerPound = 454;
    const int sodaCanInGrams = 350;
    const double artificialSweetnerInSoda = sodaCanInGrams * 0.001;

    float mouseWeightInGrams;
    int lethalDoseMouse;
    int dieterWeight;



    cout <<" Please enter the weight of the mouse in grams: " << endl;
    cin >> mouseWeightInGrams;

    cout <<" Please enter the Lethal dose for the mouse (in grams): " << endl;
    cin >> lethalDoseMouse;

    cout << " Please enter the desired weight of the dieter (in pounds): " << endl;
    cin >>  dieterWeight;

    //Output section
    // formula

   int friendsWeightGrams = gramsPerPound * dieterWeight;
   float mouseLethalDosePercentage = lethalDoseMouse / mouseWeightInGrams;


   double friendsLethalDose = friendsWeightGrams * mouseLethalDosePercentage;
   double lethalSodaDose = friendsLethalDose / artificialSweetnerInSoda;

    cout << fixed << setprecision(0);
    cout << "Lethal dose in grams, cans is : [" << friendsLethalDose << ", " << lethalSodaDose << "]" << endl;

    return 0;
}