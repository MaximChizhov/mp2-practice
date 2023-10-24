#include <iostream>
#include "TVector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // �������� ������� TVector
    TVector<int> v1(5,0); // ������� ������ �������� 5

    // ���� ����� ����� ������ � ������ � ������
    cout << "������� 5 ����� ����� ������: ";
    cin >> v1;

    TVector<int> v2(5, 0);
    cout << "������� 5 ����� ����� ������: ";
    cin >> v2;

    // ����� ����������� �������
    cout << "���������� ������� v1: ";
    for (int i = 0; i < v1.GetSize(); i++)
        cout << v1[i] << " "; // ��������� � ��������� ������� ����� �������� []
    cout << endl;

    // ����� ����������� ������� v2
    cout << "���������� ������� v2: ";
    for (int i = 0; i < v2.GetSize(); i++)
        cout << v2[i] << " ";

    cout << endl;
    //�������� ������� ������� TVector
   
    //����������� �������� �� v1 � v2
    
    v2 = v1;
    cout << "v1 = v2: " << v2 << endl;
    
    
    TVector<int> v3(5, 0);
    cout << "���������� ������� v3: ";
    cin >> v3;
    // �������� �������� �������� � ���������
    int scalar = 2;

    TVector<int> sum = v1 + v3; // ����� ���� ��������
    cout << "����� �������� v1 � v3: ";
    for (int i = 0; i < sum.GetSize(); i++)
        cout << sum[i] << " ";
    cout << endl;

    TVector<int> dif = v1 - v3;
    cout << "�������� �������� v1 � v3: ";
    for (int i = 0; i < dif.GetSize(); i++)
        cout << dif[i] << " ";
    cout << endl;

    int multiply = v1 * v3; 
    cout << "��������� �������� v1 � v3: ";
    cout << multiply << endl;

    TVector<int> sum1 = v1 + scalar; // ����� ���� ��������
    cout << "����� v1 + 2: ";
    for (int i = 0; i < sum1.GetSize(); i++)
        cout << sum1[i] << " ";
    cout << endl;

    TVector<int> dif1 = v1 - scalar;
    cout << "��������  v1 - 2: ";
    for (int i = 0; i < dif1.GetSize(); i++)
        cout << dif1[i] << " ";
    cout << endl;

    TVector<int> multiply1 = v1 * scalar;
    cout << "��������� v1 * 2: ";
    for (int i = 0; i < multiply1.GetSize(); i++)
        cout << multiply1[i] << " ";
    cout << endl;
    

    if (v1 == v2)
    {
        cout << "���������" << endl;
        cout << "������� v1, v2 �����" << endl;
    }
    else
    {
        cout << "���������" << endl;
        cout << "������� v1, v2 �� �����" << endl;
    }
    if (v1 == v3)
    {
        cout << "���������" << endl;
        cout << "������� v1, v3 �����" << endl;
    }
    else
    {
        cout << "���������" << endl;
        cout << "������� v1, v3 �� �����" << endl;
    }

    if (v1 != v2)
    {
        cout << "�� ���������" << endl;
        cout << "������� v1, v2 �� �����" << endl;
    }
    else
    {
        cout << "�� ���������" << endl;
        cout << "������� v1, v2 �����" << endl;
    }
    if (v1 != v3)
    {
        cout << "�� ���������" << endl;
        cout << "������� v1, v3 �� �����" << endl;
    }
    else
    {
        cout << "���������" << endl;
        cout << "������� v1, v3 �����" << endl;
    }
}