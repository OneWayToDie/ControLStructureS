#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CALC_1

void main()
{
	setlocale(LC_ALL, "");

	/*int x, y, z;
	cin >> x >> y >> z;
	cout << x << "\t" << y << "\t" << z << endl;*/

#ifdef CALC_1
	double a, b;	//числа, введенные с клавиатуры
	char s;			//Sign - знак операции
	cout << "¬ведите арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+') cout << a << " + " << b << " = " << a + b << endl;
	else if (s == '-') cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*') cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/')
	{
		if (b == 0)cout << "Error: Division by Zero" << endl;
		else cout << a << " / " << b << " = " << a / b << endl;
	}
	else cout << "Error: No operation" << endl;
#endif // CALC_1

	double a, b;
	char s;
	cout << "¬ведите арифметические выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}