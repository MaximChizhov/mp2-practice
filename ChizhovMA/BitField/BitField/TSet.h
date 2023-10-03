#ifndef TSet_H
#define TSet_H
#include "TBitField.h"

class TSet
{
	size_t maxPower;
	TBitField bitField;
public:
	TSet(int mp) : maxPower(mp), bitField(mp) { }; //������� ������ ������ TSet � �������� ������������ ����������� ��������� � ��������� (mp).
	TSet(const TSet& s) : maxPower(s.maxPower), bitField(s.bitField) { };
	size_t GetMaxPower(void) const { return maxPower; }//���������� ������������ ���������� ��������� � ���������.
	bool IsMem(size_t elem) const { return bitField.GetBit(elem); }//���������, ���������� �� ������� � ���������.
	void InsElem(size_t elem) { return bitField.set(elem); }// ������� ��������
	void DelElem(size_t elem) { return bitField.reset(elem); };//�������� ��������
	//�������������� ��������
	TSet operator+(size_t elem);//��������� ����������� ��������� � ��������� ���������
	TSet operator-(size_t elem);//��������� ����������� ��������� � ��������� ���������
	TSet operator+(const TSet& s);//����������� ���� ��������
	TSet operator*(const TSet& s);//����������� ���� ��������
	TSet operator~();//���������� ���������
};
#endif
