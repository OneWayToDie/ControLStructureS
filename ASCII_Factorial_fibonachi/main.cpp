#include <iostream>
using namespace std;

//#define FACTORIAL_for
//#define FACTORIAL_WHILE
//#define stepashka_for
//#define stepashka_while
//#define ASCII
//#define fibonachi_1
//#define fibonachi_2


void main()

{
	setlocale(LC_ALL, "ru");

#if defined FACTORIAL_for

	int a = 1;
	int b; cout << "Введите число, факториал которого хотите узнать: "; cin >> b;

	for (int i = 1; i <= b; i++)
	{
		a = a * i;
	}
	cout << a << endl;
#endif

#if defined FACTORIAL_WHILE

	int a = 1;
	int b; cout << "Введите число, факториал которого хотите узнать: "; cin >> b;
	int i = 1;
	while (i <= b)
	{
		a = a * i;
		i++;
	}
	cout << a << endl;
#endif


#if defined stepashka_for

	int a; cout << "Введите число: "; cin >> a;
	int b; cout << "Введите степень, в которую хотите возвести число: "; cin >> b;
	int c = a;
	for (int i = 1; i < b; i++)
	{
		c = c * a;
	}
	cout << c << endl;
#endif


#if defined stepashka_while

	int a; cout << "Введите число: "; cin >> a;
	int b; cout << "Введите степень, в которую хотите возвести число: "; cin >> b;
	int c = a;
	int i = 1;
	while (i < b)
	{
		c = c * a;
		i++;
	}
	cout << c << endl;
#endif


#if defined ASCII

	for (int i = 32; i <= 127; i++)
	{
		cout << (char)i << endl;
	}
#endif

#if defined fibonachi_1
	int old = 0;
	int simple = 1;
	int novoe = 1;
	int predel; cout << "Предел: "; cin >> predel;

	if (predel >= 1)
	{
		cout << 0 << " ";
	}
	if (predel >= 2)
	{
		cout << 1 << " ";
	}

	for (int i = 0; old + simple <= predel; i++)
	{
		novoe = old + simple;
		cout << novoe << " ";
		old = simple;
		simple = novoe;
	}
#endif

#if defined fibonachi_2

	int old = 0;
	int simple = 1;
	int novoe = 1;
	int kolichestvo; cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> kolichestvo;

	if (kolichestvo >= 1)
	{
		cout << 0 << " ";
	}
	if (kolichestvo >= 2)
	{
		cout << 1 << " ";
	}

	for (int i = 0; i < kolichestvo - 2; i++)
	{
		novoe = old + simple;
		cout << novoe << " ";
		old = simple;
		simple = novoe;
	}
#endif

}