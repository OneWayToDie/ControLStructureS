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
	cout << "������� �����: "; cin >> number;
	int buffer = number;	//������� ����� ���������� �����, ��������� ������ ��������� �������������
	//������ �������������� �������� �����������.
	int reverse = 0;		//��� ���������� ����� ������� �������� �����, ���������� ��������
	while (buffer > 0)
	{
		reverse *= 10;			//����������� ����� ��� ��������� �����;
		reverse += buffer % 10;	//�������� ������� ������ (�����) � ��������� �� 'reverse';
		buffer /= 10;			//������� ������� ����� �� ��������� �����;
	}
	cout << number << endl;
	cout << reverse << endl;

	if (reverse == number)cout << "��� ���������" << endl;
	else cout << "��� ������� �����" << endl;
#endif // PALINDROME

	int number;	//����� ����������� ������
	cout << "������� ����� ����������� ������: "; cin >> number;
	int sum_1 = 0;	//����� ���� ������� ��������
	int sum_2 = 0;	//����� ���� ������� ��������

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
		cout << "��� ������� ;-)" << endl;
	else
		cout << "��� �������, ������ � ������ ���))" << endl;
}