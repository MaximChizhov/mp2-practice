#include "TMatrix.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "TMarix" << endl;

    cout << "������� ������ �������: ";
    int size;
    cin >> size;
    TMatrix<int> matrix1(size);
    cout << "������� �������� ������ ����������������� �������(m1) �������� " << size << endl;
    cin >> matrix1;
    cout << "������� m1\n" << matrix1 << endl;

    TMatrix<int> matrix2(size);
    cout << "������� �������� ������ ����������������� �������(m2) �������� " << size << endl;
    cin >> matrix2;

    // ����� �������
    cout << "������� m2\n" << matrix2 << endl;

    TMatrix<int> matrix3(3);
    matrix3 = matrix1 + matrix2;
    cout << "m3 = m1+m2:" << endl << matrix3 << endl;
    TMatrix<int> matrix4(3);
    matrix4 = matrix1 - matrix2;
    cout << "m4 = m1-m2:" << endl << matrix4 << endl;
    TMatrix<int> matrix5(3);
    matrix5 = matrix1 * matrix2;
    cout << "m5 = m1*m2:"<< endl << matrix5 << endl;

    matrix1 = matrix2;
    cout << "m1 = m2: " << endl << matrix1 << endl;
    if (matrix1 == matrix2)
        cout << "������� m1 � m2 �����" << endl;
    else
        cout << "������� m1 � m2 �� �����" << endl;

    if (matrix1 != matrix3)
        cout << "������� m1 � m3 �� �����" << endl;
    else
        cout << "������� m1 � m3 �����" << endl;
	return 0;
 }