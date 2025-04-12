#include<iostream>
#pragma warning(disable:4326)
using std::cin;
using std::cout;
using std::endl;
using namespace std;


#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define VERTICAL_LINE		(char)179
#define GORIZONTAL_LINE		(char)196
#define WHITE_BOX			"\xDB\xDB" //(char)219
#define BLACK_BOX			"\x20\x20"			//' '

//#define hard_chess

/*
Escape - последовательность '\x00' позволяет включить в строку символ по Шестнадцатиричному ASCII-коду
*/

void main()
{

	setlocale(LC_ALL, "");

#ifdef hard_chess
	int n; cout << "Введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << GORIZONTAL_LINE << GORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else cout << (~i & 1 ^ j & 1 ? WHITE_BOX : BLACK_BOX);
			/*else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);*/
			/*else if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;
			cout << BLACK_BOX << BLACK_BOX;*/
		}
		cout << endl;
	}
#endif

}