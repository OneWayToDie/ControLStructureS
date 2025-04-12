#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1
	int i = 0;		//������� �����
	int n = 5;		//���������� ��������
	while (i < n)
	{
		cout << i << ". Loops " << endl;
		i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	double n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	const char ESCAPE = 27;
	char key;		//��� ���������� ����� ������� ASCII-��� ������� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� ������� � ���������� ASCII-��� ������� �������.
		//������� _getch() ��������� � ���������� <conio.h> - Console Input/Output Header,
		//�������� ������� ��� ������������ ������� ������.
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ���������� 'key' � ��� ������ 'int',
		//��� ���� ����� ������� �������� ��� ������� �������.
	} while (key != Escape);

}

/*
----------------------------
1. while - ���� � ������������;
2. do...while - ���� � ������������;
3. for - ���� �� �������� ����� ��������;

�������� - ��� ����������� ���������� ���� �����.
���� ����� - ��� ��� (�������� ����),
������� ����� ��������� (����������� ���������).
----------------------------
*/