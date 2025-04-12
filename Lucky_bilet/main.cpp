#include <iostream>

using namespace std;

void main()

{
	setlocale(LC_ALL, "");

	int bilet; cout << "номер билета: "; cin >> bilet;

	int razryad_1 = bilet % 10;
	int razryad_2 = (bilet / 10) % 10;
	int razryad_3 = (bilet / 100) % 10;
	int razryad_4 = (bilet / 1000) % 10;
	int razryad_5 = (bilet / 10000) % 10;
	int razryad_6 = (bilet / 100000) % 10;

	if (razryad_1 + razryad_2 + razryad_3 == razryad_4 + razryad_5 + razryad_6)
	{
		cout << "Билет - счастливый!" << endl;
	}
	else
	{
		cout << "Билет - обычный, вы лох" << endl;
	}
}