#include <iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");

	double x;
	cout << "¬ведите первое число:"; cin >> x;
	cout << x << endl;

	char z;
	cout << "¬ведите знак:"; cin >> z;
	cout << z << endl;

	double y;
	cout << "¬ведите второе число:"; cin >> y;
	cout << y << endl;



	if (z == '/' && x != 0 && y == 0)
	{
		cout << "ƒелить на ноль нельз€" << endl;
	}

	else if (z == '/' && x == 0 && y != 0)
	{
		cout << 0 << endl;
	}

	else if (z == '*' && x == 0 || y == 0)
	{
		cout << 0 << endl;
	}

	else if (z == '+')
	{
		cout << x + y << endl;
	}

	else if (z == '-')
	{
		cout << x - y << endl;
	}

	else if (z == '*')
	{
		cout << x * y << endl;
	}

	else if (z == '/')
	{
		cout << x / y << endl;
	}
}