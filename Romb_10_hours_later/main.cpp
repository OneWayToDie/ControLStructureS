#include <iostream>
#pragma warning(disable:4326)
using namespace std;
#define ROMB


void main()
{
    setlocale(LC_ALL, "Russian");
#ifdef ROMB
    int size;
    cout << "������� ������ �����: "; cin >> size;
    string romb_1 = "/";
    string romb_2 = "\\";
    int otstup_sleva = size / 2; // ������ ����� ����� �������� �����, ������ ��� � �������� �� �������� ���� � �������� �������, � ������ ����� ������, ��� �� �������� ����� ��� �� �����
    int otstup_seredini = 2; // ����� ����, ������ ��� ������ ����� � ������ �� ������ ��������.

    if (size > 116)
    {
        cout << "������ ����� ������ �������";
    }
    else if (size % 2 == 0)
    {
        for (int i = 0; i <= size / 2; i++) // ��� ������� ������
        {
            cout << " ";
        }
        cout << romb_1 + romb_2 << endl;

        for (int j = 1; j < size - 1; j++) // �������� ������ �����
        {
            if (j < size / 2)
            {
                for (int l = 0; l < otstup_sleva; l++) // ����� ��� ������ �������� ����� ������
                {
                    cout << " ";
                }
                cout << romb_1;
                for (int k = 1; k <= otstup_seredini; k++) // ����� ��� ������ �������� ����� �������� �����
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
        for (int g = 0; g <= size / 2; g++) // ��� ������� �����
        {
            cout << " ";
        }
        cout << romb_2 + romb_1 << endl;
    }
    else if (size % 2 == 1)
    {
        cout << "��� �� ����!!!";
    }
#endif
}
