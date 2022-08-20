#pragma once
#ifndef FractionH
#define FractionH
#include <iostream>

using namespace std;

class Fraction
{
	int num;
	int denom;
public:
	Fraction(int n = 1, int m = 1)
	{
		num = n;
		denom = m;
	}

	int numerator()
	{
		return num;
	}
	int denominator()
	{
		return denom;
	}

	Fraction operator+(Fraction b);
	Fraction operator-()
	{
		return Fraction(-num, denom);
	}
	friend Fraction operator-(Fraction a, Fraction b);

	void print()
	{
		cout << num << '/' << denom;
	}
};

Fraction operator*(Fraction a, Fraction b);
Fraction operator/(Fraction a, Fraction b);

#endif
