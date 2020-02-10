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

// Write your function here

string toFrenchGender(const string & country)
{

    string result = "who knows?";
    string prefix;
    string islands = "iles";

    int len = country.length();
    string last = country.substr(country.size()-2);
    string plain = "Israel, Madagascar, Sri Lanka, Singapore, Monaco, Cuba, Cyprus";
    string masculine = "Belize, Cambodge, Mexique, Mozambique, Zaire, Zimbabwe";

    string vowels = "AEIOU";
    char first = country.at(0);

    // Starting with the exceptions

    if(country == "Belize" || country == "Cambodge" || country == "Mexique" || country == "Mozambique" || country == "Zaire" || country == "Zimbabwe"){

        prefix = "all le ";
    }
        // Starting with vowels
    else if(first == 'A' || first == 'E' || first == 'I' || first == 'O' || first == 'U'){
        prefix = "l";
    }
        // Plural
    else if(country.substr(0,3) == islands || last == "es" || last == "is" || last == "as" || last == "os"){
        prefix = "les ";
    }
        // No prefix
    else if(country == "Israel" || country == "Madagascar" || country == "Sri Lanka" || country == "Singapore" || country == "Monaco" || country == "Cuba" || country == "Cyprus"){
        prefix = "";
    }
    else if(country == plain){
        prefix = "";
    }
        // Feminine & Masculine prefix
    else if(country.substr(country.length() -1) == "e" || country.substr(country.length() - 1) == "o"){
        prefix = "la ";
    }
    else if(country == masculine){
        prefix = "el ";
    }
    else{
        prefix = "le ";
    }

    result = prefix + country;
    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run

    return 0;
}

