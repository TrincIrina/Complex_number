#include "Complex.h"

void Complex::Print()
{
	if (im > 0)
		std::cout << re << " + " << im << "i\n";
	if (im < 0)
		std::cout << re << " " << im << "i\n";
	if (im == 0)
		std::cout << re << "\n";
}

Complex Complex::sum(const Complex& summand)
{
	return Complex(re + summand.re, im + summand.im);
}

Complex Complex::subtraction(const Complex& deductible)
{
	return Complex(re - deductible.re, im - deductible.im);
}

Complex Complex::multiplication(const Complex& multiplier)
{
	return Complex(re * multiplier.re - im * multiplier.im, re * multiplier.im + im * multiplier.re);
}

Complex Complex::division(const Complex& divider)
{
	double numerator1 = re * divider.re + im * divider.im;
	double numerator2 = im * divider.re - re * divider.im;
	double conjugate = divider.re * divider.re + divider.im * divider.im;
	return Complex(numerator1 / conjugate, numerator2 / conjugate);
}

Complex Complex::invert()
{
	re *= (-1);
	im *= (-1);
	return Complex(re, im);
}

Complex Complex::increment()
{
	return Complex(re++, im++);
}

Complex Complex::decrement()
{
	return Complex(--re, --im);
}

double Complex::module() const
{
	return std::sqrt(re * re + im * im);
}

bool Complex::equals(const Complex& other)
{
	return re == other.re && im == other.im;
}

int Complex::compare(const Complex& other)
{
	double mod_1 = module();
	double mod_2 = other.module();
	if(mod_1==mod_2)
		return 0;
	if (mod_1 > mod_2)
		return 1;
	if (mod_1 < mod_2)
		return -1;
}

Complex Complex::operator-()
{
	return invert();
}

Complex Complex::operator+(const Complex& other)
{
	return sum(other);
}

Complex Complex::operator-(const Complex& other)
{
	return subtraction(other);
}

Complex Complex::operator*(const Complex& other)
{
	return multiplication(other);
}

Complex Complex::operator/(const Complex& other)
{
	return division(other);
}

bool Complex::operator==(const Complex& other)
{
	return equals(other);
}

bool Complex::operator!=(const Complex& other)
{
	return !equals(other);
}

bool Complex::operator<(const Complex& other)
{
	return compare(other) < 0;
}

bool Complex::operator>(const Complex& other)
{
	return compare(other) > 0;
}

bool Complex::operator<=(const Complex& other)
{
	return compare(other) <= 0;
}

bool Complex::operator>=(const Complex& other)
{
	return compare(other) >= 0;
}
