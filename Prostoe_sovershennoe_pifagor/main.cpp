#include <iostream>

using namespace std;

//#define prostoe
//#define sovershennoe
//#define Pifagor



void main()

{
	setlocale(LC_ALL, "");

#if defined prostoe

	int predel_ryada_chisel; cout << "Введите последнее число для поиска ряда простых чисел: "; cin >> predel_ryada_chisel;


	for (int i = 2; i < predel_ryada_chisel; i++)
	{
		int sum = 0;
		for (int j = 2; j < predel_ryada_chisel; j++)
		{
			if (i % j == 0)
			{
				sum++;
			}
		}
		if (sum == 1)
		{
			cout << i << "\t";
		}
	}


#endif

#if defined sovershennoe

	int predel_ryada_soV4isel; cout << "Введите последнее число для поиска ряда совершенных чисел: "; cin >> predel_ryada_soV4isel;

	for (int i = 1; i < predel_ryada_soV4isel; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			cout << i << endl;
		}
		sum = 0;
	}
#endif

#if defined Pifagor

	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			cout << i * j << '\t';
		}
		cout << '\n';
	}
#endif
}