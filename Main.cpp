#include <iostream>
#include "RationalNumber.h"
using namespace std;

void main()
{
	cout << "Testing Copy Constructor" << endl;
	RationalNumber x;
	cout << "X is ";
	x.printRN();
	cout << endl;

	cout << "Testing Paramaterized Constructor" << endl;
	RationalNumber y(4, 5);
	cout << "Y is ";
	y.printRN();
	cout << endl;

	cout << "Testing Copy Constructor" << endl;
	RationalNumber z = y;
	cout << "Z is ";
	z.printRN();
	cout << endl;

	cout << "Testing Assignment Overload " << endl;
	x = y;
	cout << "X is ";
	x.printRN();
	cout << endl;

	cout << endl << "Now Testing Arithmethic Overload Operations" << endl;
	RationalNumber RN1(3, 8);
	RationalNumber RN2(1, 6);
	RationalNumber RN3(1, 2);
	RationalNumber RN4(2, 5);
	
	cout << "Addition Overload Operation" << endl;
	(RN1 + RN2).printRN();
	cout << endl;

	cout << "Subtraction Overload Operation" << endl;
	(RN3 - RN2).printRN();
	cout << endl;

	cout << "Multiplication Overload Operation" << endl;
	(RN1 * RN4).printRN();
	cout << endl;

	cout << "Division Overload Operation" << endl;
	(RN1 / RN2).printRN();

	system("pause");

}