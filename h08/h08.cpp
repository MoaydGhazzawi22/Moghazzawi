/**
 *  @author Moayd Ghazzawi
 *  @date 02/13/2020
 *  @file h07.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mghazzawi"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file
string barCode(int zip)
{
    string result;
    int base = zip;
    int check = checkDigit(base);
    int digit;
    for( int i = 0; i < 5; i++)
    {
        digit = base % 10;
        base = base/10;
        result = codeForDigit(digit) + result;
    }
    result = "|" + result + codeForDigit(check) + "|";
    return result;
}
string codeForDigit(int digit)
{
    string result;
    switch(digit)
    {
        case 1:
            result = ":::||";
            break;
        case 2:
            result = "::|:|";
            break;
        case 3:
            result = "::||:";
            break;
        case 4:
            result = ":|::|";
            break;
        case 5:
            result = ":|:|:";
            break;
        case 6:
            result = ":||::";
            break;
        case 7:
            result = "|:::|";
            break;
        case 8:
            result = "|::|:";
            break;
        case 9:
            result = "|:|::";
            break;
        case 0:
            result = "||:::";
            break;
        default:
            break;
   }

   return result;
}
int checkDigit(int zip)
{
   int sumOfDigit = 0;
   while(zip != 0)
   {
       sumOfDigit += (zip % 10);
       zip /= 10;
   }
   zip = 10 - (sumOfDigit % 10);
   if(zip == 10){
       zip = 0;
   }
   return zip;
}



/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
    cout << checkDigit(92667);
   // You can add code that "runs" here
   return 0;
}