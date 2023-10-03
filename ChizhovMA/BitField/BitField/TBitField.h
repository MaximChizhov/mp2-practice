#ifndef TBitField_H
#define TBitField_H

struct elem_t
{
	unsigned short bit0 : 1;
	unsigned short bit1 : 1;
	unsigned short bit2 : 1;
	unsigned short bit3 : 1;
	unsigned short bit4 : 1;
	unsigned short bit5 : 1;
	unsigned short bit6 : 1;
	unsigned short bit7 : 1;
};


class TBitField
{
private:
	size_t bitlen; //����� ����
	size_t memlen; //���-�� ��������� pMem ��� �������� �������� ����
	elem_t* pMem; //������ ��� �������� �������� ����
public:
	TBitField(size_t len);
	TBitField(const TBitField& bf);    //                                   
	~TBitField();
	size_t size() const noexcept { return bitlen; }
	void set(size_t pos);//������������� ��� � ������� 1
	void reset(size_t pos);//������������� ��� � ������� 0
	bool GetBit(size_t pos) const;

	TBitField operator |(const TBitField& bf);
	TBitField operator &(const TBitField& bf);
	TBitField operator ~(void);
};
#endif 
