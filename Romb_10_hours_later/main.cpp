#include <iostream>
#pragma warning(disable:4326)
using namespace std;
#define ROMB


void main()
{
    setlocale(LC_ALL, "Russian");
#ifdef ROMB
    int size;
    cout << "Введите высоту ромба: "; cin >> size;
    string romb_1 = "/";
    string romb_2 = "\\";
    int otstup_sleva = size / 2; // отступ слева равен половине ромба, потому что в средеине он начинает идти в обратную сторону, и отступ слева больше, чем на половину длины нам не нужен
    int otstup_seredini = 2; // равен двум, потому что колпак снизу и сверху мы рисуем отдельно.

    if (size > 116)
    {
        cout << "Больше длины строки консоли";
    }
    else if (size % 2 == 0)
    {
        for (int i = 0; i <= size / 2; i++) // для колпака сверху
        {
            cout << " ";
        }
        cout << romb_1 + romb_2 << endl;

        for (int j = 1; j < size - 1; j++) // создание самого ромба
        {
            if (j < size / 2)
            {
                for (int l = 0; l < otstup_sleva; l++) // нужен для вывода отступов перед ромбом
                {
                    cout << " ";
                }
                cout << romb_1;
                for (int k = 1; k <= otstup_seredini; k++) // нужен для вывода отступов между стенками ромба
                {
                    cout << " ";
                }
                cout << romb_2 << "\n";
                otstup_sleva--;
                otstup_seredini = otstup_seredini + 2;
            }
            else
            {
                otstup_seredini = otstup_seredini - 2;
                otstup_sleva++;
                for (int l = 0; l < otstup_sleva; l++)
                {
                    cout << " ";
                }
                cout << romb_2;
                for (int k = otstup_seredini; k > 0; k--)
                {
                    cout << " ";
                }
                cout << romb_1 << "\n";
            }
        }
        for (int g = 0; g <= size / 2; g++) // для колпака снизу
        {
            cout << " ";
        }
        cout << romb_2 + romb_1 << endl;
    }
    else if (size % 2 == 1)
    {
        cout << "ЭТО НЕ РОМБ!!!";
    }
#endif
}
