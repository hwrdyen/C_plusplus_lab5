/* 2/14 Computer Science Assignment Q4
Howard Yen
Feb 14, 2017
Write a program that inputs the 3 side lengths of a triangle and then states what type of triangle it is. If it is not possible to form a triangle with the given side lengths, your program should display an appropriate message.*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	double b;
	double c;
	double p;


	do {
		cout << "Please enter first side of the triangle.\n"; //ask the user to enter the first side of the triangle
		cin >> a;
	} while (a<=0); //re-do while a less or equal to zero
	do {
		cout << "Please enter second side of the triangle.\n"; //ask the user to enter the second side of the triangle
		cin >> b;
	} while (b<=0); //re-do while b less or equal to zero
	do {
		cout << "Pleas enter third side of the triangle.\n"; //ask the user to enter the third side of the triangle
		cin >> c;
	} while (c<=0); //re-do while c less or equal to zero

	p=a+b+c; //perimeter = a+b+c

	if ((a*2>p) || (b*2>p) || (c*2>p)) {
		cout << "This is an undefined triangle.\n";
	} //if a*2>perimeter or b*2>perimeter or c*2>perimeter then output this is an undefined triangle
	else if (a==b && b==c && a==c) {
		if ((a==sqrt(pow(b,2)+pow(c,2)))||
			(b==sqrt(pow(a,2)+pow(c,2)))||
			(c==sqrt(pow(a,2)+pow(b,2)))){
			cout << "This is an equilateral right-angle triangle.\n";
		} //if a=b and b=c and a=c and also accored with pythagoras theorem then output this is an equilateral right-angle triangle
		else {
			cout << "This is an equilateral triangle.\n";
		} //if a=b and b=c and a=c but not aaccored with pythagoras theorem then output this is an equilateral triangle
	}
	else if (a==b || b==c || a==c) {
		if ((a==sqrt(pow(b,2)+pow(c,2)))||
			(b==sqrt(pow(a,2)+pow(c,2)))||
			(c==sqrt(pow(a,2)+pow(b,2)))){
			cout << "This is an isosceles right-angle triangle.\n";
		} //if a=b or b=c or a=c and also accorded with pythagoras theorm then output this is an isosceles right-angle triangle
		else {
			cout << "This is an isosceles triangle.\n";
		} //if a=b or b=c or a=c but not accorded with pythagoras theorm then output this is an isosceles triangle
	}
	else {
		if ((a==sqrt(pow(b,2)+pow(c,2)))||
			(b==sqrt(pow(a,2)+pow(c,2)))||
			(c==sqrt(pow(a,2)+pow(b,2)))){
			cout << "This is an scalene right-angle triangle.\n";
		} //else and also accorded with pythagoras theorm then output this is an scalene right-angle triangle
		else {
			cout << "This is a scalene triangle.\n";
		} //else but not accorded with pythagoras theorm then output this is a scalene triangle
	}
	return(0); //end of the program
}