#include<iostream>
#include <windows.h>

#pragma warning(disable:4326)
using std::cin;
using std::cout;
using std::endl;
using namespace std;

//#define HardChess
#define Chess_Board

void main()
{
	/*system("color 7F");*/

	setlocale(LC_ALL, "Russian");

#ifdef HardChess
	int size; cout << "������� ������ �����: "; cin >> size;
	int razmer_blocka = size;
	for (int i = 0; i < size; i++)// stroki
	{
		for (int ii = 0; ii < razmer_blocka; ii++) // kletki po vertikali
		{
			for (int j = 0; j < size; j++) // stolbci
			{
				for (int jj = 0; jj < razmer_blocka; jj++) // kletki po gorizontali
				{
					if (i % 2 == j % 2)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}

			}
			cout << endl;
		}

	}
#endif


#ifdef Chess_Board

	int n; cout << "������� ������ ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)
			{
				std::cout << "\033[47m"; // ����� ���
				cout << "  ";								// ���� ANSI
				std::cout << "\033[0m"; // ���������� ��� 
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
#endif	
}