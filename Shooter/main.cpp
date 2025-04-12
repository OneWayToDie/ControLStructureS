#include<iostream>
#include<conio.h>
using namespace std;

#define Enter		13
#define Escape		27

#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

//#define SHOOTER_IF

void main()
{
	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;

#ifdef SHOOTER_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else if (key == Escape)
		{
			cout << "Выход" << endl;
		}
		else
		{
			if (key != -32)cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_IF

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w':	cout << "Вперед" << endl;	break;
		case DownArrow:
		case 'S':
		case 's':	cout << "Назад" << endl;	break;
		case LeftArrow:
		case 'A':
		case 'a':	cout << "Влево" << endl;	break;
		case RightArrow:
		case 'D':
		case 'd':	cout << "Вправо" << endl;	break;

		case ' ':	cout << "Прыжок" << endl;	break;
		case  Enter:cout << "Огонь" << endl;	break;
		case Escape:
		case -32:break;
		default:	cout << "Error" << endl;
		}
	} while (key != Escape);
}