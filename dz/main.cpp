#include <iostream>
#pragma warning(disable:4326)
using namespace std;

//#define kvadrat_zvezda
//#define triangle_1
//#define triangle_2
//#define triangle_3
//#define triangle_4
#define kvadrat_plus_minus

void main()

{
	setlocale(LC_ALL, "");

#ifdef kvadrat_zvezda

	char zvezda = 42;
	int razmer;
	cout << "Введите размер квадрата: "; cin >> razmer;
	for (int i = 1; i <= razmer; i++)
	{
		for (int j = 1; j <= razmer; j++)
		{
			cout << zvezda << " ";
		}
		cout << "\n";
	}
#endif

#ifdef triangle_1

	char zvezda = 42;
	int razmer; cout << "Введите размер треугольника: "; cin >> razmer;
	int otstup = 1;

	for (int i = 1; i <= razmer; i++)
	{
		otstup++;
		for (int j = 1; j < otstup;j++)
		{
			cout << zvezda << " ";
		}
		cout << "\n";
	}
#endif

#ifdef triangle_2

	char zvezda = 42;
	int razmer; cout << "Введите размер треугольника: "; cin >> razmer;
	int otstup = razmer;

	for (int i = 1; i <= razmer; i++)
	{
		otstup--;
		for (int j = 0; j <= otstup;j++)
		{
			cout << zvezda << " ";
		}
		cout << "\n";
	}
#endif

#ifdef triangle_3

	char zvezda = 42;
	int razmer; cout << "Введите размер треугольника: "; cin >> razmer;

	for (int i = 1; i <= razmer; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << "  ";
		}
		for (int k = 1; k <= razmer - i + 1; k++)
		{
			cout << zvezda << " ";
		}
		cout << endl;
	}
#endif

#ifdef triangle_4
	char zvezda = 42;
	int razmer; cout << "Введите размер треугольника: "; cin >> razmer;

	for (int i = 1; i <= razmer; i++)
	{
		for (int j = 1; j <= razmer; j++)
		{
			if (j <= razmer - i)
			{
				cout << "  ";
			}
			else
			{
				cout << zvezda << " ";
			}
		}
		cout << '\n';
	}
#endif

#ifdef kvadrat_plus_minus

	int razmer; cout << "Введите размер квадрата: "; cin >> razmer;
	int n = -1; //чтобы квадрат начинался с плюса, ибо по системе счисления ASCII - 43 = '+', 45 = '-'

	for (int i = 0; i < razmer; i++)
	{
		for (int j = 0; j < razmer; j++)
		{
			cout << (char)(44 + n) << " ";
			n = -n; // чтобы было чередование плюс/минус
		}
		cout << '\n';
	}
#endif
}