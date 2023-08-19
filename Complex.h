#pragma once
#include<iostream>

class Complex
{
private:
	double re; // �������������� �����
	double im; // ���������� ��� ������ ������� i
public:
	// ����������� �� ���������
	Complex() : Complex(0, 0) {}
	// ����������� � �����������
	Complex(double re, double im) : re{ re }, im{ im } {}
	// ����� ������������ �����
	void Print();
	// setters & getters
	double& Re() { return re; }
	double& Im() { return im; }

	// �������� ����������� �����
	Complex sum(const Complex& summand);
	// ��������� ����������� �����
	Complex subtraction(const Complex& deductible);
	// ��������� ����������� �����
	Complex multiplication(const Complex& multiplier);
	// ������� ����������� �����
	Complex division(const Complex& divider);
	// ��������� ����� ������������ �����
	Complex invert();
	// ���������� �� 1
	Complex increment();
	// ���������� �� 1
	Complex decrement();
	// ���������� ������ ������������ �����
	double module() const;
	// ��������� �����
	bool equals(const Complex& other);
	// �������� ����������� ����� �� ������
	int compare(const Complex& other);

	// ���������� 
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