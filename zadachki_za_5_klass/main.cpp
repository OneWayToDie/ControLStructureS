#include<iostream>

using namespace std;

#define zadacha_1
//#define zadacha_2
//#define zadacha_3
//#define zadacha_4



void main()
{
	setlocale(LC_ALL, "Russian");

#if defined zadacha_1
	int grn;
	int copeika;
	cout << "������� ������: "; cin >> grn;
	cout << "������� �������: "; cin >> copeika;
	cout << "�������������� ����� � �������� ������: " << grn << " ���." << copeika << " ���." << endl;


#endif //zadacha_1


#if defined zadacha_2
	double price_of_copybook;
	int number_of_notebooks;
	double price_of_pencil;
	int number_of_pencil;
	cout << "������� ��������� �������: "; cin >> price_of_copybook;
	cout << "������� ���������� ��������: "; cin >> number_of_notebooks;
	cout << "������� ��������� ���������: "; cin >> price_of_pencil;
	cout << "������� ���������� ����������: "; cin >> number_of_pencil;
	double total_price = price_of_copybook * number_of_notebooks + price_of_pencil * number_of_pencil;
	cout << "��������� �������: " << total_price << " ���." << endl;

#endif //zadacha_2

#if defined zadacha_3
	double price_of_copybook;
	double price_of_cover;
	int number_of_set;
	cout << "������� ��������� �������: ";  cin >> price_of_copybook;
	cout << "������� ��������� �������: "; cin >> price_of_cover;
	cout << "������� ���������� ����������: "; cin >> number_of_set;
	double total_price = (price_of_copybook + price_of_cover) * number_of_set;
	cout << "��������� �������: " << total_price << " ���." << endl;

#endif //zadacha_3

#if defined zadacha_4
	int distance;
	double litr_na_100km;
	double price_of_gasoline;
	cout << "������� ���������� �� ����: ";  cin >> distance;
	cout << "������� ������ ������� �� 100�� �������: "; cin >> litr_na_100km;
	cout << "������� ���� �������: "; cin >> price_of_gasoline;
	double total_price = (litr_na_100km * distance / 100 * price_of_gasoline) * 2;
	cout << "��������� �������: " << total_price << " ���." << endl;

#endif //zadacha_4
}