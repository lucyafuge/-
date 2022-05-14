// Проектирование и дизайн информационных систем : Выполнил студент группы ИС1-191-ОТ Чешихин Артем
#include <iostream>
#include "WhereIsPoint.h"
#include "Point.h"

using namespace std;

void SumTwoNumbers()
{
	cout << "Индивидуальное задание номер 1 - запрашивает с клавиатуры два целых числа, и выводит на экран сумму данных чисел" << endl;
	int first = 0, second = 0, sum = 0;

	cout << "first = ";
	cin >> first;

	cout << "second = ";
	cin >> second;

	sum = first + second;
	cout << first << (second >= 0 ? "+" : "") << second << "=" << sum << endl;
}
void SumDigitsInNumber()
{
	cout << "Индивидуальное задание номер 2 - дано число. Найти сумму его цифр." << endl;
	int number = 0, sum = 0;

	cout << "Введите число ";
	cin >> number;

	for (int i = number; i > 0; i /= 10)
	{
		sum += i % 10;
	}
	cout << "Сумма цифр числа " << number << " равняется " << sum << endl;
}
void SquareArea()
{
	cout << "Индивидуальное задание номер 3 - площадь квадрата со стороной а (а - положительное число)." << endl;
	double number = 0, square = 0;

	cout << "Введите сторону квадрата ";
	cin >> number;
	square = number * number;
	cout << "Площадь квадрата со стороной " << number << " равняется " << square << endl;
}
void FindPointInArea_01()
{
	cout << "Индивидуальное задание номер 1 - По заданным координатам точки определить, где находится точка (ВАРИАНТ НОМЕР 1):\n внутри заштрихованной области;\n вне заштрихованной области;\n на границе этой области." << endl;
	double pointX = 0, pointY = 0;

	cout << "Введите координаты точки " << endl << "X: ";
	cin >> pointX;
	cout << "Y: ";
	cin >> pointY;
	WhereIsPoint whereIsPoint{ pointX, pointY, FIRST };
	whereIsPoint.GetAnswer();
}
void FindPointInArea_02()
{
	cout << "Индивидуальное задание номер 2 - По заданным координатам точки определить, где находится точка (ВАРИАНТ НОМЕР 1):\n внутри заштрихованной области;\n вне заштрихованной области;\n на границе этой области." << endl;
	double pointX = 0, pointY = 0;

	cout << "Введите координаты точки " << endl << "X: ";
	cin >> pointX;
	cout << "Y: ";
	cin >> pointY;
	WhereIsPoint whereIsPoint{ pointX, pointY, SECOND };
	whereIsPoint.GetAnswer();
}
void PowPositiveAndIgnoreNegative()
{
	cout << "Индивидуальное задание номер 3 - Ввести с клавиатуры три числа, положительные возвести в квадрат, а отрицательные оставить без изменений." << endl;
	const int COUNT = 3;
	double numbers[COUNT];

	cout << "Введите " << COUNT << " числа" << endl;
	for (int i = 0; i < COUNT; i++)
	{
		double number;
		cin >> number;
		numbers[i] = number > 0 ? number * number : number;
	}
	for (int i = 0; i < COUNT; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}
void PrintMinNumber()
{
	cout << "Индивидуальное задание номер 4 - Ввести с клавиатуры три числа. Вывести на экран наименьшее из них." << endl;
	const int COUNT = 3;
	double numbers[COUNT], min;

	cout << "Введите " << COUNT << " числа" << endl;
	for (int i = 0; i < COUNT; i++)
	{
		cin >> numbers[i];
	}
	min = numbers[0];
	for (int i = 0; i < COUNT; i++)
	{
		double number = numbers[i];
		if (number < min)
			min = number;
	}
	cout << "Минимальное число равно " << min << endl;
}
void IsNumberContains5OrNumber()
{
	cout << "Индивидуальное задание номер 5 - Дано число. Определить:  \nа) входит ли в него цифра 5;\nб) входит ли в него цифра а." << endl;
	const int NUMBER = 5;
	int number = 0, a = 0;

	cout << "Введите число ";
	cin >> number;
	cout << "Введите число a ";
	cin >> a;

	for (int i = number; i > 0; i /= 10)
	{
		int num = i % 10;
		if (num == NUMBER || num == a)
		{
			cout << "Число " << number << " содержит число " << (num == NUMBER ? NUMBER : a) << endl;
			return;
		}

	}
	cout << "Число " << number << " не содержит число " << NUMBER << " или число " << a << endl;
}
void PrintNameOfNubber()
{
	cout << "Индивидуальное задание номер 6 - Введите цифру от 0 до 9 и сообщите название этой цифры." << endl;
	int number = 0;
	string name = "";
	cout << "Введите число ";
	cin >> number;
	switch (number)
	{
	case 0:
		name = "Ноль";
		break;
	case 1:
		name = "Один";
		break;
	case 2:
		name = "Два";
		break;
	case 3:
		name = "Три";
		break;
	case 4:
		name = "Четыре";
		break;
	case 5:
		name = "Пять";
		break;
	case 6:
		name = "Шесть";
		break;
	case 7:
		name = "Семь";
		break;
	case 8:
		name = "Восемь";
		break;
	case 9:
		name = "Девять";
		break;
	default:
		name = "Введено отличное от 0 - 9 число";
		break;
	}
	cout << name << endl;
}
void PrintSymbolOfNumber()
{
	cout << "Индивидуальное задание номер 7 - На клавиатуре компьютера каждой цифре соответствует какой-то символ. Введите цифру и выведите соответствующий ей символ." << endl;
	int number = 0;
	string name = "";
	cout << "Введите число ";
	cin >> number;
	switch (number)
	{
	case 0:
		name = ")";
		break;
	case 1:
		name = "!";
		break;
	case 2:
		name = "@";
		break;
	case 3:
		name = "#";
		break;
	case 4:
		name = "$";
		break;
	case 5:
		name = "%";
		break;
	case 6:
		name = "^";
		break;
	case 7:
		name = "&";
		break;
	case 8:
		name = "*";
		break;
	case 9:
		name = "(";
		break;
	default:
		name = "Введено отличное от 0 - 9 число";
		break;
	}
	cout << name << endl;
}
void QuadrilateralIsRectangle()
{
	cout << "Индивидуальное задание номер 8 - Пусть даны координаты вершин четырехугольника. Составьте программу, которая определяла бы, является ли этот четырехугольник прямоугольником." << endl;
	const int COUNT = 4;
	int countsCompareX = 0, countsCompareY = 0;
	Point points[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		double x, y;
		cout << "Введите координату точки " << i << endl << "X: ";
		cin >> x;
		cout << "Y: ";
		cin >> y;
		points[i].SetCoordinates(x, y);
	}
	for (int i = 0; i < COUNT; i++)
		for (int j = 0; j < COUNT; j++)
		{
			if (points[i].X == points[j].X)
				countsCompareX++;
			if (points[i].Y == points[j].Y)
				countsCompareY++;
		}
	if (countsCompareX == 8 && countsCompareY == 8)
		cout << "Это прямоугольник";
	else
		cout << "Это не прямоугольник";

	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работа номер 1" << endl;
	SumTwoNumbers();
	SumDigitsInNumber();
	SquareArea();

	cout << "Лабораторная работа номер 2" << endl;
	FindPointInArea_01();
	FindPointInArea_02();
	PowPositiveAndIgnoreNegative();
	PrintMinNumber();
	IsNumberContains5OrNumber();
	PrintNameOfNubber();
	PrintSymbolOfNumber();
	QuadrilateralIsRectangle();
}
