#include <iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "");

	double x;
	cout << "������� ������ �����:"; cin >> x;
	cout << x << endl;

	char z;
	cout << "������� ����:"; cin >> z;
	cout << z << endl;

	double y;
	cout << "������� ������ �����:"; cin >> y;
	cout << y << endl;



	if (z == '/' && x != 0 && y == 0)
	{
		cout << "������ �� ���� ������" << endl;
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