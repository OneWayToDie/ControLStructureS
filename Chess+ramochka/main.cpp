#include<iostream>
#include <windows.h>

#pragma warning(disable:4326)
using std::cin;
using std::cout;
using std::endl;
using namespace std;

#define HardChess
//#define Chess_Board

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define VERTICAL_LINE		(char)179
#define GORIZONTAL_LINE		(char)196
#define WHITE_BOX			(char)219
#define BLACK_BOX			' '

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef HardChess
	int size; cout << "¬ведите размер доски: "; cin >> size;
	int razmer_blocka = size;
	for (int i = 0; i < size; i++)// stroki
	{
		for (int ii = 0; ii < razmer_blocka; ii++) // kletki po vertikali
		{
			for (int j = 0; j < size; j++) // stolbci
			{
				for (int jj = 0; jj < razmer_blocka; jj++) // kletki po gorizontali
				{
					if (i % 2 == j % 2)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
#endif

#ifdef Chess_Board
	int size; cout << "¬ведите размер доски: "; cin >> size;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size + 1; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == size && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == 0 && j == size + 1)cout << UPPER_RIGHT_ANGLE;
			else if (i == size && j == size + 1)cout << LOWER_RIGHT_ANGLE;
			else if (i > 0 && j == 0) cout << VERTICAL_LINE;
			else if (i == 0) cout << GORIZONTAL_LINE;
			else if (j == size + 1) cout << VERTICAL_LINE;
			else if (i == size) cout << GORIZONTAL_LINE;
			else if (i % 2 == j % 2) cout << WHITE_BOX;
			else cout << BLACK_BOX;
		}
		cout << endl;
	}
#endif
}