
/**
 *  @author Moayd Ghazzawi
 *  @date 02/17/2020
 *  @file /h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mghazzawi"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.





////////////////// STUDENT TESTING /////////////


string zipZap (const string& str)
{
    string result="";
    int len=str.size();
    if (len<3)
    {
        result=str;
    }
    else
    {
        int i=0;
        while (i<len-2)
        {
            string word=str.substr(i,3);
            if (word.at(0)=='z'&&word.at(2)=='p')
            {
                result +="zp";
                i+=3;

            }
            else
            {
                result+=word.at(0);
                i++;
            }
        }
    result+=str.substr(i,len);
    }
    return result;
}

int countCode(const string& str)
{
    int result=0;
    if(str.size()>3)
    {
        for(size_t i=0, len=str.size(); i<len-3; ++i)
        {
            string word=str.substr(i,4);
            string front=word.substr(0,2);
            string back=word.substr(3);
            if (front=="co" && back=="e")
            {
                result++;
            }
        }
    }
    return result;
}

string everyNth (const string& str, int n)
{
    string result="";
    int len=str.size();
    for (int i=0; i<len; i+=n)
    {
        result=result+str.at(i);
    }
    return result;
}

bool prefixAgain(const string& str, int n)
{
    bool result;
    return str.substr(1).find(str.substr(0,n))!=string::npos;
}

int run ()
{
    cout << "Student testing" << endl;
    return 0;
}