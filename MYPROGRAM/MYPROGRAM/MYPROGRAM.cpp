﻿#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер вертикали и номер горизонтали первого поля через пробел: ";
	cin >> x1 >> y1;
	cout << "Введите номер вертикали и номер горизонтали второго поля через пробел: ";
	cin >> x2 >> y2;
	for (int i = 1; i <= 8; i++) {//отображение доски 
		for (int j = 1; j <= 8; j++) {
			cout << " -";
		}
		cout << endl;
		for (int j = 1; j <= 8; j++) {
			if ((x1 == j) and (9-y1 == i) or ((x2 == j) and (9-y2 == i))) {
				cout << "|*";
			}
			else {
				cout << "| ";
			}
		}
		cout << "|";
		cout << endl;
		
	}
	for (int j = 1; j <= 8; j++) {
			cout << " -";
		}
	cout << endl;
	if ((x1+y1)%2==(x2+y2)%2) {//проверки
		cout <<endl<< "Поля одного цвета" << endl << endl;
	}
	else {
		cout << "Поля разных цветов" << endl << endl;
	}
	if (((x1 == x2) or (y1 == y2)) or (abs(x1 - x2) == abs(y1 - y2))) {
		cout << "Ферзь на первом поле угрожает второму полю" << endl<<endl;
	}
	else {
		cout << "Ферзь на первом поле не угрожает второму поле" << endl;
	}
	if (((abs(x1 - x2) == 2) and (abs(y1 - y2) == 1)) or ((abs(x1 - x2) == 1) and (abs(y1 - y2) == 2))) {
		cout << "Конь на первом поле угрожает второму полю" << endl << endl;
	}
	else {
		cout << "Конь на первом поле не угрожает второму полю" << endl << endl;
	}
	if ((x1 == x2) or (y1 == y2)) {
		cout<<"Одним ходом ладьи можно попасть из первого поля во второе" << endl << endl;
	}
	else {
		cout << "Одним ходом ладьи невозможно попасть из первого поля во второе" << endl << endl;
		cout << "Для того, чтоб попасть из первого поля во второе за два хода ладьи, первый ход должен привести на поле с кооридинатами ("<<x1<<", "<<y2<<") или ("<<x2<<", " <<y1<<")"<< endl << endl;
	}
	if ((abs(x1 - x2) == abs(y1 - y2)) or ((x1 == x2) or (y1 == y2))) {
		cout << "Одним ходом ферзя можно попасть из первого поля во второе" << endl << endl;
	}
	else {
		cout << "Одним ходом ферзя невозможно попасть из первого поля во второе" << endl << endl;
		cout << "Для того, чтоб попасть из первого поля во второе за два хода ферзя, первый ход должен привести,например, на поле с кооридинатами (" << x1 << ", " << y2 << ") или (" << x2 << ", " << y1 << ")" << endl << endl;
	}
	if (abs(x1 - x2) == abs(y1 - y2)) {
		cout << "Одним ходом слона можно попасть из первого поля во второе" << endl << endl;
	}
	else if ((x1 + y1) % 2 != (x2 + y2) % 2) {
		cout << "Так как поля разных цветов, слон за любое кол-во ходов не сможет попасть из первого поля во второе" << endl << endl;
	}
	else {
		int a1, b1, a2, b2;//формулы для вычисления пересечения диагоналей двух полей(на одно из этих полей должен привести первый ход, чтоб за второй ход попасть во второе поле)
		b1 = (y1 + y2 - x2 + x1) / 2;
		a1 = b1 + x2 - y2;
		b2 = (y1 + y2 + x2 - x1) / 2;
		a2 = -b2 + y2 + x2;
		cout << "Одним ходом слона невозможно попасть из первого поля во второе" << endl << endl;
		cout << "Для того, чтоб попасть из первого поля во второе за два хода слона, первый ход должен привести на поле с кооридинатами (" << a1 << ", " << b1 << ") или (" << a2 << ", " << b2 << ")" << endl << endl;
	}
}
