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
	cout << "Введите гривны: "; cin >> grn;
	cout << "Введите копейки: "; cin >> copeika;
	cout << "Преобразование числа в денежный формат: " << grn << " грн." << copeika << " коп." << endl;


#endif //zadacha_1


#if defined zadacha_2
	double price_of_copybook;
	int number_of_notebooks;
	double price_of_pencil;
	int number_of_pencil;
	cout << "Введите стоимость тетради: "; cin >> price_of_copybook;
	cout << "Введите количество тетрадей: "; cin >> number_of_notebooks;
	cout << "Введите стоимость карандаша: "; cin >> price_of_pencil;
	cout << "Введите количество карандашей: "; cin >> number_of_pencil;
	double total_price = price_of_copybook * number_of_notebooks + price_of_pencil * number_of_pencil;
	cout << "Стоимость покупки: " << total_price << " грн." << endl;

#endif //zadacha_2

#if defined zadacha_3
	double price_of_copybook;
	double price_of_cover;
	int number_of_set;
	cout << "Введите стоимость тетради: ";  cin >> price_of_copybook;
	cout << "Введите стоимость обложки: "; cin >> price_of_cover;
	cout << "Введите количество комплектов: "; cin >> number_of_set;
	double total_price = (price_of_copybook + price_of_cover) * number_of_set;
	cout << "Стоимость покупки: " << total_price << " грн." << endl;

#endif //zadacha_3

#if defined zadacha_4
	int distance;
	double litr_na_100km;
	double price_of_gasoline;
	cout << "Введите расстояние до дачи: ";  cin >> distance;
	cout << "Введите расход бензина на 100км пробега: "; cin >> litr_na_100km;
	cout << "Введите цену бензина: "; cin >> price_of_gasoline;
	double total_price = (litr_na_100km * distance / 100 * price_of_gasoline) * 2;
	cout << "Стоимость поездки: " << total_price << " грн." << endl;

#endif //zadacha_4
}