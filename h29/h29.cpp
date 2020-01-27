/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h29.cpp
 */
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID
#include "h29.h"

// Add your code here



//////////////////////// STUDENT TESTING //////////////////////////
void info(const string& msg, const Image& img);

int run()
{
    cout << "Part 1: construct three images" << endl;
    Image empty;                    // empty image
    Image square(20, 20);           // square image
    Image lego("images/lego.png");  //  from file
    cout << " -- Success" << endl;

    cout << "\nPart 2: print size, width, height" << endl;
    info("empty", empty);
    info("square", square);
    info("lego", lego);

    cout << "\nPart 3: Modify some images" << endl;
    bool ok = empty.load("images/paris.jpg");
    string msg = "Loading paris into empty image. ";
    msg += ok ? "Success." : "Failed.";
    cout << msg << endl;
    info("empty", empty);

    Pixel fillColor{255, 127};
    square.fill(fillColor);

    cout << "\nPart 4: loop through an image in two ways." << endl;
    for (auto& p : empty) // grayscale paris
    {
        auto avg = (p.red + p.green + p.blue) / 3;
        p.red = p.green = p.blue = avg;
    }
    // Use an iterator loop to draw a cross on square
    int cw = square.width() / 2;
    int cv = square.size() / 2;
    int i = 1;
    for (auto itr = begin(square); itr != end(square); ++itr)
    {
        if (i % cw == 0 || (i > cv - cw && i < cv + cw))
            *itr = GRAY;
        i++;
    }

    cout << "\nPart 5: Save all the pictures." << endl;
    auto parisOK = empty.save("actual/paris.png");
    auto squareOK = square.save("actual/square.png");
    auto legoOK = lego.save("actual/lego.jpg");
    cout << "paris.png " << (parisOK ? "saved" : "failed") << endl;
    cout << "square.png " << (squareOK ? "saved" : "failed") << endl;
    cout << "lego.jpg " << (legoOK ? "saved" : "failed") << endl;

    return 0;
}
// Helper function
void info(const string& msg, const Image& img)
{
    cout << msg << ": size()->" << img.size()
        << ", width()->" << img.width()
        << ", height()->" << img.height() << endl;
}
