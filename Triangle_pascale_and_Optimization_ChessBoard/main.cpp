#include<iostream>
#include <windows.h>

#pragma warning(disable:4326)
using std::cin;
using std::cout;
using std::endl;
using namespace std;

//#define Perestanovka_Peremennblh_1
//#define Perestanovka_Peremennblh_2
//#define Perestanovka_Peremennblh_3
//#define triangle_Pascale_1
//#define triangle_Pascale_2 // тоже самое, но подогнанное под формулу с интернета
//#define hard_chess_optimization

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef Perestanovka_Peremennblh_1

	int n1; cout << "¬ведите первое число: "; cin >> n1;
	int n2; cout << "¬ведите второе число: "; cin >> n2;

	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 -= n2;

	cout << n1 << " " << n2 << endl;
#endif

#ifdef Perestanovka_Peremennblh_2

	int n1; cout << "¬ведите первое число: "; cin >> n1;
	int n2; cout << "¬ведите второе число: "; cin >> n2;

	if (n2 == 2 * n1)
	{
		cout << "n1 = " << " " << (n1 << 1) << endl;
		cout << "n2 = " << " " << (n2 >> 1) << endl;
	}
	else if (n1 == 2 * n2)
	{
		cout << "n1 = " << " " << (n1 >> 1) << endl;
		cout << "n2 = " << " " << (n2 << 1) << endl;
	}
	else cout << "не получитс€ выполнени€ услови€ задачи" << endl;
#endif

#ifdef Perestanovka_Peremennblh_3

	int n1 = 8;
	int n2 = 5;

	n1 = n1 | n2;
	n2 = n1 - n2;
	n1 = n1 - n2;

	cout << "n1 = " << n1 << "\n" << "n2 = " << n2 << endl;
#endif

#ifdef triangle_Pascale_1

	int size; cout << "¬ведите размер треугольника ѕаскал€: "; cin >> size;

	for (int i = 1; i <= size; i++) // количество строк
	{
		int static_number = 1; // посто€нна€, дл€ вывода по бокам треугольника, и начала вывода с единицы в верхней строке
		for (int j = 1; j < size - i + 1; j++)
		{
			cout << " "; // дл€ вывода нормального треугольника
		}
		for (int j = 1; j <= i; j++)
		{
			cout << static_number << " "; // кажда€ строка начинаетс€ с вывода единицы
			static_number = static_number * (i - j) / j; // кажда€ строка заканчиваетс€ выводом единицы 
		}
		cout << "\n";
	}

#endif

#ifdef triangle_Pascale_2 

	int size; cout << "¬ведите размер треугольника ѕаскал€: "; cin >> size;

	for (int n = 1; n <= size; n++) // stroka
	{
		int adbIn = 1; // јƒџЌ
		for (int k = 1; k < size - n + 1; k++)
		{
			if (size < 6) cout << " "; // дл€ вывода нормального треугольника
			else if (size < 10) cout << "  ";
			else if (size < 15) cout << "    ";
		}
		for (int k = 1; k <= n; k++) // stolbci
		{

			if (size < 6) cout << adbIn << " ";
			else if (size < 10) cout << adbIn << "   ";
			adbIn = adbIn * (n - k) / k;
		}
		cout << endl;
	}
#endif

#ifdef hard_chess_optimization
	int size; cout << "¬ведите размер доски: "; cin >> size;
	int mestopolojenie_po_x = 0;
	int mestopolojenie_po_y = 0;

	for (int i = 0; i < size * size; i++)
	{
		mestopolojenie_po_y < size ? mestopolojenie_po_x = 0 : mestopolojenie_po_x = size;
		for (int j = 0; j < size * size; j++)
		{
			cout << (mestopolojenie_po_x < size ? "* " : "  ");
			mestopolojenie_po_x == size * 2 - 1 ? mestopolojenie_po_x = 0 : mestopolojenie_po_x++;
		}
		mestopolojenie_po_y == size * 2 - 1 ? mestopolojenie_po_y = 0 : mestopolojenie_po_y++;
		cout << endl;
	}
#endif
}