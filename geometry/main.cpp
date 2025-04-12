#include<iostream>
#pragma warning(disable:4326)
using std::cin;
using std::cout;
using std::endl;
using namespace std;

//#define kvadrat
//#define triangle_1
//#define triangle_2
//#define triangle_3
//#define plus_minus
//#define Romb_1
//#define Romb_2
//#define Romb_3
//#define Chess_plus_minus // тернарным оператором



void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef kvadrat
	int n;		//размер фигуры
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef triangle_1
	int n; cout << "¬ведите размер фигуры: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef triangle_2

	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) // повтор€ет вывод строки
	{
		for (int j = i; j < n; j++) // формирует строку из звЄздочек
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef triangle_3
	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif

#ifdef plus_minus
	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0) cout << "+ ";else cout << "- ";*/
			if (i % 2 == j % 2) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif

#ifdef Romb_1

	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++) cout << " ";cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  ";cout << "/";
		cout << endl;
	}
#endif


#ifdef Romb_2

	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 - 1; j < i; j++) cout << " ";cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++)cout << " ";cout << "/";
		cout << endl;
	}
#endif


#ifdef Romb_3

	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (i == n - 1 - j || i - n == n * 2 - j - 1)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif

#ifdef Chess_plus_minus
	int n; cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*i % 2 == j % 2 ? cout << "+ " : cout << "- ";*/
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif
}