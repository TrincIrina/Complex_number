#pragma once
#include<iostream>

class Complex
{
private:
	double re; // действительное число
	double im; // коэфициент при мнимой единице i
public:
	// Конструктор по умолчанию
	Complex() : Complex(0, 0) {}
	// Конструктор с параметрами
	Complex(double re, double im) : re{ re }, im{ im } {}
	// Вывод комплексного числа
	void Print();
	// setters & getters
	double& Re() { return re; }
	double& Im() { return im; }

	// Сложение комплексных чисел
	Complex sum(const Complex& summand);
	// Вычитание комплексных чисел
	Complex subtraction(const Complex& deductible);
	// Умножение комплексных чисел
	Complex multiplication(const Complex& multiplier);
	// Деление комплексных чисел
	Complex division(const Complex& divider);
	// изменение знака комплексного числа
	Complex invert();
	// увеличение на 1
	Complex increment();
	// уменьшение на 1
	Complex decrement();
	// нахождение модуля комплексного числа
	double module() const;
	// сравнение чисел
	bool equals(const Complex& other);
	// сравнеие комплексных чисел по модулю
	int compare(const Complex& other);

	// Перегрузки 
	Complex operator-();

	Complex operator+(const Complex& other);
	Complex operator-(const Complex& other);
	Complex operator*(const Complex& other);
	Complex operator/(const Complex& other);
	
	bool operator==(const Complex& other);
	bool operator!=(const Complex& other);
	bool operator<(const Complex& other);
	bool operator>(const Complex& other);
	bool operator<=(const Complex& other);
	bool operator>=(const Complex& other);
};