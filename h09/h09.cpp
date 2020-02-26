/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

string STUDENT = "mghazzawi"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
std::string digit (int n, const std::string& symbols);
std::string toRoman(int n);




/////////// Student Testing ///////////////////////
int run()
{
    int n;
    string symbols;
    cin >> n >> symbols;
    string a = digit(n, symbols);
    cout << a;

    return 0;
}

string digit(int n, const string & symbols)
{
    int num = n % 10;
    string result = "";
    if(n <= 0 && n >= 3999)
    {
        result = "OUT OF RANGE";
    }
    else
    {
        while(n != 0)
        {
            int a = n % 10;
        switch(a)
        {
            case 1:
            result = symbols.substr(0,1);
            break;
            case 2:
            result = symbols.substr(0,1) + symbols.substr(0, 1);
            break;
            case 3:
            result = symbols.substr(0,1) + symbols.substr(0, 1) + symbols.substr(0, 1);
            break;
            case 4:
            result = symbols.substr(0,1) + symbols.substr(1,1);
            break;
            case 5:
            result = symbols.substr(1,1);
            break;
            case 6:
            result = symbols.substr(1,1) + symbols.substr(0,1);
            break;
            case 7:
            result = symbols.substr(1,1) + symbols.substr(0,1) + symbols.substr(0,1);
            break;
            case 8:
            result = symbols.substr(1,1) + symbols.substr(0,1) + symbols.substr(0,1) + symbols.substr(0,1);
            break;
            case 9:
            result = symbols.substr(0,1) + symbols.substr(2,1);
            break;
        }
        n /= 10;
    }
}

    return result;
}

string toRoman(int n)
{
    int d = n;
    int e;
    string result = "";
    if(n <= 0 || n >= 3999)
    {
        result = "OUT OF RANGE";
    }
    else
    {
        e = d % 10;
        d /= 10;
        string symbols = "IVX";
        string a = digit(e, symbols);
            e = d % 10;
            d /= 10;
        symbols = "XLC";
        string b = digit(e, symbols);
            e = d % 10;
            d /= 10;
        symbols = "CDM";
        string c = digit(e, symbols);
            e = d % 10;
            d /= 10;
        symbols = "MMM";
        string f = digit(e, symbols);

        result = f + c + b + a;
    }
    return result;
}