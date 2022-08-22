#include "Fraction.h"

Fraction Fraction::operator+(Fraction b)
{
	int cd = denom * b.denom;
	int ns = num * b.denom + b.num * denom;
	Fraction sum(ns, cd);
	return sum;
}

Fraction operator-(Fraction a, Fraction b)
{
	int cd = a.denom * b.denom;
	int ns = a.num * b.denom - b.num * a.denom;
	Fraction subtr(ns, cd);
	return subtr;
}

Fraction operator*(Fraction a, Fraction b)
{
	int np = a.numerator() * b.numerator();
	int dp = a.denominator() * b.denominator();
	return Fraction(np, dp);
}

Fraction operator/(Fraction a, Fraction b)
{
	if (b.numerator() == 0)
	{
		cerr << "Делитель равен нулю" << endl;
		exit(1);
	}
	return a * Fraction(b.denominator(), b.numerator());
}

Fraction Fraction::operator++()
{
	num += denom;
	return *this;
}
Fraction Fraction::operator++(int)
{
	Fraction old_value(*this);
	++* this;
	return old_value;
}
Fraction Fraction::operator--()
{
	num -= denom;
	return *this;
}
Fraction Fraction::operator--(int)
{
	Fraction old_value(*this);
	--* this;
	return old_value;
}