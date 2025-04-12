#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1
	int i = 0;		//Счетчик цикла
	int n = 5;		//Количество итераций
	while (i < n)
	{
		cout << i << ". Loops " << endl;
		i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	double n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	const char ESCAPE = 27;
	char key;		//Эта переменная будет хранить ASCII-код нажатой клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() находится в библиотеке <conio.h> - Console Input/Output Header,
		//Содержит функции для отслеживания нажатий клавиш.
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной 'key' в тип данных 'int',
		//для того чтобы увидеть числовой код нажатой клавиши.
	} while (key != Escape);

}

/*
----------------------------
1. while - цикл с предусловием;
2. do...while - цикл с постусловием;
3. for - цикл на заданное число итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код (фрагмент кода),
который нужно зациклить (многократно выполнить).
----------------------------
*/