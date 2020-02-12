/**
 *  @author Moayd Ghazzawi
 *  @date 2/11/2020
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
using namespace std;
using stringIn = const string&;

string STUDENT = "mghazzawi";  // Add your Canvas login name

// Add your function here
int sumNums(stringIn str){

int sum{0};
int num{0};

for(size_t i{0}, len{str.size()}; i < len; i++)
{
char ch = str[i];

if(isdigit(ch))
{
int digit = ch - '0';
num = num*10;
num = num + digit;

if(i== len-1){
sum += num;
}

}else{
sum +=num;
num = 0;


}



}


return sum;
}



/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
// Add any code you like here

	cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

    return 0;
}
