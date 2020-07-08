#include <iostream>
#include "RationalNumber.h"
using namespace std;

RationalNumber::RationalNumber() 
{
	num = 0;
	den = 1;
}

RationalNumber::RationalNumber(int n, int d)
{
	if (d < 0)
		num = -n;
	else
		num = n;

	if (d < 0)
		den = -d;
	else
		den = d;

	simplify();
}

RationalNumber::RationalNumber(const RationalNumber &x)
{
	num = x.num;
	den = x.den;
	simplify();
}

RationalNumber RationalNumber::operator+(const RationalNumber q)
{
	RationalNumber tempObj;
	tempObj.num = (q.num * den) + (q.den * num);
	tempObj.den = q.den * den;
	tempObj.simplify();
	return tempObj;
}

RationalNumber RationalNumber::operator-(const RationalNumber q)
{
	RationalNumber tempObj;
	tempObj.num = (q.num * den) - (q.den * num);
	tempObj.den = q.den * den;
	tempObj.simplify();
	return  tempObj;
}

RationalNumber RationalNumber::operator*(const RationalNumber q)
{
	RationalNumber tempObj;
	tempObj.num = q.num * num;
	tempObj.den = q.den * den;
	tempObj.simplify();
	return tempObj;
}

RationalNumber RationalNumber::operator/(const RationalNumber q)
{
	RationalNumber tempObj;
	tempObj.num = q.den * num;
	tempObj.den = q.num * den;
	tempObj.simplify();
	return tempObj;
}

RationalNumber RationalNumber::operator=(const RationalNumber q)
{
	num = q.num;
	den = q.den;
	simplify();
	return *this;
}

void RationalNumber::printRN()
{
	if (den == 1)
		cout << num << endl;
	else
		cout << num << "/" << den << endl;
}

void RationalNumber::simplify()
{
	
	int n = num < 0 ? -num : num;
	int d = den;
	int max = n > d ? n : d;
	int gcd = 0;

	for (int i = max; i >= 2; i--)

	if (num % i == 0 && den % i == 0)
		{
			gcd = i;
			break;
		}
		
	if (gcd != 0)
		{
			num /= gcd;
			den /= gcd;
		}
	
}