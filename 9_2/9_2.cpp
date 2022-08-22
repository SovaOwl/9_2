#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int numerator = -999, denominator = -999, numerator2 = -999, denominator2 = -999;

	cout << "Введите числитель дроби 1: ";
	cin >> numerator;
	cout << "Введите знаменатель дроби 1: ";
	cin >> denominator;
	cout << "Введите числитель дроби 2: ";
	cin >> numerator2;
	cout << "Введите знаменатель дроби 2: ";
	cin >> denominator2;

	Fraction f12(numerator, denominator);
	Fraction f13(numerator2, denominator2);
	Fraction summ = f12 + f13, minus = f12 - f13, multiplication = f12* f13, division = f12 / f13, unary_minus = -f12, prefix_inc = ++f12, postfix_inc = f12++, prefix_dec = ++f12, postfix_dec = f12++;

	cout << numerator << "/" << denominator << " + " << numerator2 << "/" << denominator2 << " = ";
	summ.print();
	cout << endl;

	cout << numerator << "/" << denominator << " - " << numerator2 << "/" << denominator2 << " = ";
	minus.print();
	cout << endl;

	cout << numerator << "/" << denominator << " * " << numerator2 << "/" << denominator2 << " = ";
	multiplication.print();
	cout << endl;

	cout << numerator << "/" << denominator << " / " << numerator2 << "/" << denominator2 << " = ";
	division.print();
	cout << endl;

	unary_minus.print();
	cout << endl;

	prefix_inc.print();
	cout << endl;

	postfix_inc.print();
	cout << endl;

	prefix_dec.print();
	cout << endl;

	postfix_dec.print();

	return 0;
}
