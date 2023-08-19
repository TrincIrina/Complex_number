#include<iostream>
#include"Complex.h"
using namespace std;

void main() {
	setlocale(0, "");
	double re, im;
	cout << "Введите действительную часть комплексного числа: ";
	cin >> re;
	cout << "Введите мнимую часть комплексного числа: ";
	cin >> im;
	Complex a(re, im);
	cout << "Первое комплексное число: "; a.Print();
	a = -a;        // меняем знак числа
	a.increment();   // увеличиваем на 1
	cout << "Поменяем знак числа и увеличим на 1." << endl;
	cout << "Действительная часть числа: " << a.Re() << endl;
	cout << "Мнимая часть числа: " << a.Im() << endl << endl;
	cout << "Введите действительную часть комплексного числа: ";
	cin >> re;
	cout << "Введите мнимую часть комплексного числа: ";
	cin >> im;
	Complex b(re, im);
	cout << "Второе комплексное число: "; b.Print();
	b.decrement();   // уменьшаем на 1
	cout << "Уменьшим число на 1: "; b.Print();
	cout << "Модуль числа r = " << b.module() << endl << endl;
	cout << "a = "; a.Print();
	cout << "b = "; b.Print();
	if (a == b)
		cout << "Числа равны." << endl << endl;
	else
		cout << "Числа не равны." << endl << endl;
	
	Complex c = a + b;
	cout << "Сумма чисел: "; c.Print();
	Complex g = a - b;
	cout << "Разность чисел: "; g.Print();
	Complex d = a * b;
	cout << "Произведение чисел: "; d.Print();
	Complex f = a / b;
	cout << "Частное чисел: "; f.Print();
}