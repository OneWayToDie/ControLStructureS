#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.00000000000001 << endl;

	cout << "short:" << endl;
	cout << "SIZE:" << sizeof(short) << endl;
	cout << "unsigned short:" << 0 << "..." << USHRT_MAX << endl;
	cout << "signed short:" << SHRT_MIN << " ... " << SHRT_MAX << endl;

	cout << "int:" << endl;
	cout << "SIZE:" << sizeof(int) << endl;
	cout << "unsigned int:" << 0 << "..." << UINT_MAX << endl;
	cout << "signed int:" << INT_MIN << " ... " << INT_MAX << endl;



	cout << "long:" << endl;
	cout << "SIZE:" << sizeof(long) << endl;
	cout << "unsigned long:" << 0 << "..." << ULONG_MAX << endl;
	cout << "signed long:" << LONG_MIN << " ... " << LONG_MAX << endl;

	cout << "LLONG:" << endl;
	cout << "SIZE:" << sizeof(long) << endl;
	cout << "unsigned LLong:" << 0 << "..." << ULLONG_MAX << endl;
	cout << "signed LLong:" << LLONG_MIN << " ... " << LLONG_MAX << endl;

	cout << "FLT:" << endl;
	cout << "SIZE:" << sizeof(float) << endl;
	cout << "signed float:" << FLT_MIN << " ... " << FLT_MAX << endl;

	cout << "double:" << endl;
	cout << "SIZE:" << sizeof(double) << endl;
	cout << "signed double:" << DBL_MIN << " ... " << DBL_MAX << endl;


	//Ctrl + D - Duplicate selection(продублировать выделенный код)
}