#include <iostream>
#include "TVector.h"

using namespace std;

int main()
{
    cout << "TVector" << endl;


    setlocale(LC_ALL, "Russian");
    // �������� ������� TVector
    int size;
    cout << "������ ������ �������: ";
    cin >> size;
    TVector<int> v1(size,0); // ������� ������ �������� 5

    // ���� ����� ����� ������ � ������ � ������
    cout << "������� " << size << " ��������(��) ����� ������ ��� ������� �������(v1): ";
    cin >> v1;

    TVector<int> v2(size, 0);
    cout << "������� " << size << " ��������(��) ����� ������ ��� ������� �������(v2): ";
    cin >> v2;

    // ����� ����������� �������
    cout << "���������� ������� v1: ";
    cout << v1 << endl; // ��������� � ��������� ������� ����� �������� []

    // ����� ����������� ������� v2
    cout << "���������� ������� v2: ";
    cout << v2 << endl;
   
    //����������� �������� �� v1 � v2
    
    v2 = v1;
    cout << "v2 = v1: " << v2 << endl;

    TVector<int> v3(size, 0);
    cout << "������� " << size << " ��������(��) ����� ������ ��� �������� �������(v3): ";
    cin >> v3;
    cout << "���������� ������� v3: " << v3 << endl;
    // �������� �������� �������� � ���������
    int scalar = 2;

    TVector<int> sum = v1 + v3; // ����� ���� ��������
    cout << "����� �������� v1 � v3: ";
    cout << sum << endl;

    TVector<int> dif = v1 - v3;
    cout << "�������� �������� v1 � v3: ";
    cout << dif << endl;

    int multiply = v1 * v3; 
    cout << "��������� �������� v1 � v3: ";
    cout << multiply << endl;

    TVector<int> sum1 = v1 + scalar; // ����� ���� ��������
    cout << "����� v1 + 2: ";
    cout << sum1 << endl;

    TVector<int> dif1 = v1 - scalar;
    cout << "��������  v1 - 2: ";
    cout << dif1 << endl;

    TVector<int> multiply1 = v1 * scalar;
    cout << "��������� v1 * 2: ";
    cout << multiply1 << endl;
    

    if (v1 == v2)
        cout << "������� v1, v2 �����" << endl;
    else
        cout << "������� v1, v2 �� �����" << endl;
    if (v1 != v3)
        cout << "������� v1, v3 �� �����" << endl;
    else
        cout << "������� v1, v3 �����" << endl;
}