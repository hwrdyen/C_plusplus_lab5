/* 2/9 Computer Science Assignment Q1
Howard Yen
Feb 0, 2018
Write a program that will let you enter any number and that will print its square root or the message: "Negative numbers do not have a square root value"*/

#include <iostream> //include iostream header
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main () //beginning of the program
{
	double number;

	cout << "Please enter a number.\n"; //ask the user to type in a number
	cin >> number;

	if (number < 0){
		cout << "Negative numbers do not have a square root value.\n"; //if the number is less than zero then output negative numbers do not have a square root value
	}
	else {
		cout << "The square root value of this number is " << sqrt(number) << "\n"; //output the square root value if the number is not less than zero
	}
	return (0); //end of the program
}


//square root => sqrt(x)