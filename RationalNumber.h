 #ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber
{
public:
	RationalNumber();
	RationalNumber(int, int);
	RationalNumber(const RationalNumber &x);

	RationalNumber operator+(const RationalNumber);
	RationalNumber operator-(const RationalNumber);
	RationalNumber operator*(const RationalNumber);
	RationalNumber operator/(const RationalNumber);
	RationalNumber operator=(const RationalNumber);

	void printRN();

private:
	int num, den;
	void simplify();
};

#endif