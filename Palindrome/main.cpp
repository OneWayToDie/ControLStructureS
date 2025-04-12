#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
#define TICKET

void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROME
	int number;
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Создаем копию введенного числа, поскольку данные введенные пользователем
	//должны гарантированно остаться неизменными.
	int reverse = 0;		//Эта переменная будет хранить исходное число, записанное наоборот
	while (buffer > 0)
	{
		reverse *= 10;			//Освобождаем место для следующей цифры;
		reverse += buffer % 10;	//Получаем младший разряд (цифру) и сохраняем ее 'reverse';
		buffer /= 10;			//Убираем младшую цифру из исходного числа;
	}
	cout << number << endl;
	cout << reverse << endl;

	if (reverse == number)cout << "Это палиндром" << endl;
	else cout << "Это простое число" << endl;
#endif // PALINDROME

	int number;	//номер автобусного билета
	cout << "Введите номер автобусного билета: "; cin >> number;
	int sum_1 = 0;	//сумма трех младших разрядов
	int sum_2 = 0;	//сумма трех старших разрядов

	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
	if (sum_1 == sum_2)
		cout << "Вам повезет ;-)" << endl;
	else
		cout << "Вам повезет, только в другой раз))" << endl;
}