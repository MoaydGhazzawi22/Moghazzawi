/**
 *  @author Moayd Ghazzawi
 *  @date 2/8/2020
 *  @file h05.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "mghazzawi";  // Add your Canvas login name
/*

Write a function named toFrenchGender() (string)
that takes the French name of a country (input)
and returns the name with the appropriate article added (output)

"le" for masculine or "la" for feminine such as le Canada or la Belgique

if the country name starts with a vowel(if statment)
use "l" , for example l'Afghanistan.

use les for plural country names. A name is plural if it ends in es, is, as, or os, or
if the first word in the name is iles, or "islands".

for countries do not have a preceding definite article(le or la): Israel, Madagascar, Sri Lanka,
Singapore, Monaco, Cuba, and Cyprus.


Country end in letter e or o? Feminine prefix->la (space)
Otherwise? Masculine prefix->le (space)
With these exceptions
 Belize Cambodge Mexique Mozambique Zaire Zimbabwe (all le)
 Starts with a vowel? prefix l' (no space)
 Plural? prefix is les (space)
 Israel, Madagascar, Sri Lanka, Singapore, Monaco,
Cuba and Cyprus have no prefix.


*/

// Write your function here

string toFrenchGender(const string& country)
{

    string result = "who knows";
    string prefix = "";

    string last = country.substr(country.size()-2,2);

    cout << last;

    if(country == "Mexique" || country == "Belize"){

        prefix = "le ";
    }
    else if(country == "Belize" || country == "Cambodge" || country == "Mexique" || country == "Mozambique" || country == "Zaire" || country == "Zimbabwe"){

        prefix = "all le";
    }
    else if(country == "Israel" || country == "Madagascar" || country == "Sri Lanka" || country == "Singapore" || country == "Monaco"){

        prefix = "";
    }
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run

    return 0;
}

