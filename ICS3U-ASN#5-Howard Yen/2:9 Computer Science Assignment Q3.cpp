/* 2/9 Computer Science Assignment Q3
Howard Yen
Feb 9, 2018
Write a program that reads in a student's numeric grade and total score on a test and finds and displays the corresponding letter grade.*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning fo the program
{
	double number;
	int total;
	double percent;

	do {
		cout << "Please enter your numeric grade.\n"; //ask the user to type in his/her numeric grade
		cin >> number;
	} while (number < 0); //re-do when the user type in an negative number
	do {
		cout << "Please enter the total score of your test.\n"; //ask the user to type in the total score of his/her test
		cin >> total;
	} while (total < number); //re-do when the user type in a total number that is less than his/her numeric grade
	
	percent = number/total*100; 

	if (percent>=80) {
		cout << "You got an A.\n"; //if you get a score more than 80 then you get an A
	}
	else if (percent>=70) {
		cout << "You got a B.\n"; //if you get a score more than 70 then you get a B
	}
	else if (percent>=60) {
		cout << "You got a C.\n"; //if you get a score more than 60 then you get a C
	}
	else if (percent>=50) {
		cout << "You got a D.\n"; //if you get a score more than 50 then you get a D
	}
	else {
		cout << "You got a F.\n"; //if you get a score less then 50 then you get a F
	}
	return(0); //end of the program
}
