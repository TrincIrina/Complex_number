#include<iostream>
#include"Complex.h"
using namespace std;

void main() {
	setlocale(0, "");
	double re, im;
	cout << "������� �������������� ����� ������������ �����: ";
	cin >> re;
	cout << "������� ������ ����� ������������ �����: ";
	cin >> im;
	Complex a(re, im);
	cout << "������ ����������� �����: "; a.Print();
	a = -a;        // ������ ���� �����
	a.increment();   // ����������� �� 1
	cout << "�������� ���� ����� � �������� �� 1." << endl;
	cout << "�������������� ����� �����: " << a.Re() << endl;
	cout << "������ ����� �����: " << a.Im() << endl << endl;
	cout << "������� �������������� ����� ������������ �����: ";
	cin >> re;
	cout << "������� ������ ����� ������������ �����: ";
	cin >> im;
	Complex b(re, im);
	cout << "������ ����������� �����: "; b.Print();
	b.decrement();   // ��������� �� 1
	cout << "�������� ����� �� 1: "; b.Print();
	cout << "������ ����� r = " << b.module() << endl << endl;
	cout << "a = "; a.Print();
	cout << "b = "; b.Print();
	if (a == b)
		cout << "����� �����." << endl << endl;
	else
		cout << "����� �� �����." << endl << endl;
	
	Complex c = a + b;
	cout << "����� �����: "; c.Print();
	Complex g = a - b;
	cout << "�������� �����: "; g.Print();
	Complex d = a * b;
	cout << "������������ �����: "; d.Print();
	Complex f = a / b;
	cout << "������� �����: "; f.Print();
}