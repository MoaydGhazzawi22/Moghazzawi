/**
 *  @author Moayd Ghazzawi
 *  @date 2/4/2020
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "mghazzawi"; // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int run()
{
	// Don't change anything inside this function
	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);

    return 0;
}

// Implement your functions here

void printTitle()
{
	cout << STUDENT << "-" << ASSIGNMENT << "-Grade Calculator" << endl;
	cout << " -------------------------------------------" << endl;
	cout << "Enter your letter grade: ";

}

string getInput(){
	string letterGrade;
	getline(cin, letterGrade);
	return letterGrade;

}

double letterToPoints(stringIn letterGrade){
	double result =0.0;
	if(letterGrade == "A"){
		result =4.0;
	}else if (letterGrade == "A-"){
		result =3.7;
	}else if(letterGrade == "B+"){
		result =3.3;
	}else if(letterGrade == "B"){
		result =3.0;
	}else if(letterGrade == "B-"){
		result =2.7;
	}else if(letterGrade == "C+"){
		result =2.3;
	}else if(letterGrade == "C"){
		result =2.0;
	}else if(letterGrade == "C-"){
		result =1.7;
	}else if(letterGrade == "D+"){
		result =1.3;
	}else if(letterGrade == "D"){
		result =1.0;
	}else if(letterGrade == "D-"){
		result =.7;
	}else if(letterGrade == "F"){
		result =0.0;
	}else if(letterGrade == "A+"){
		result = INVALID_COMBINATION;
	}else if(letterGrade == "F+"){
		result = INVALID_COMBINATION;
	}else if(letterGrade == "F-"){
		result = INVALID_COMBINATION;
	}else {
		result = INVALID_INPUT;
	}
	return result;
}

void printReport(double points){
		cout << fixed << setprecision(1) << endl;
		cout <<"Grade value is ["<<points<<"]"<<endl;;

		cout <<"Grade value is [";
	if(points == INVALID_INPUT){
		cout << "Invalid input";
	}else if (points == INVALID_COMBINATION){
		cout << "Invalid combination";
	}else{

	}
		cout << "]";
}