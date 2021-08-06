/* 2/9 Computer Science Assignment Q2
Howard Yen
Feb 9, 2018
Ask the user their age, and the current year. Greet the user and tell them the year they will be 25, 50, and 75. */

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	int age;
	int year;

	do {
		cout << "Please enter your age.\n"; //ask the user to type in his/her age
		cin >> age;
	} while (age < 0); //re-do if he/she type in a negative number
	do {
		cout << "Please enter the current year.\n"; //ask the user to type in the current year
		cin >> year;
	} while (year < 0); //re-do if he/she type in a negative number

	cout << "Hello user.\n"; //greet the user
	cout << "You will be 25 years old in " << year + (25 - age) << "\n"; //output which year will the user become 25 years old
	cout << "You will be 50 years old in " << year + (50 - age) << "\n"; //output which year will the user become 50 years old
	cout << "You will be 75 years old in " << year + (75 - age) << "\n"; //output which year will the user become 75 years old
	return(0); //end of the program
}
