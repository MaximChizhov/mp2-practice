#ifndef _MONOM_H
#define _MONOM_H

#include <iostream>


using namespace std;

struct TMonom
{
	double coef;
	int degree;

	TMonom();
	TMonom(const TMonom& m);
	TMonom(double c, int d);

	virtual bool operator > (const TMonom& d) const;
	virtual bool operator < (const TMonom& d) const;
	virtual bool operator == (const TMonom& d) const;
	virtual bool operator != (const TMonom& d) const;

	friend ostream& operator<<(ostream& os, const TMonom& m)
	{
		os << m.coef << " " << m.degree;
		return os;
	}
};
/*
class TPolynom
{
private:
	TRingList<TMonom>* monoms;
	string name;

	static map<string, double> symbolDict;
	

public:
	TPolynom();
	TPolynom(const string& s);
	TPolynom(const TRingList<TMonom>& rlist);
	TPolynom(const TPolynom& p);
	~TPolynom();

	TPolynom operator+(const TPolynom& p);
	TPolynom operator-(const TPolynom& p);
	TPolynom operator*(const TPolynom& p);
	const TPolynom& operator=(const TPolynom& p);

	TPolynom difx() const;
	TPolynom dify() const;
	TPolynom difz() const;

	double operator() (double _x, double _y, double _z);
	TRingList<TMonom>* GetMonom()const { return monoms; } // ��� ������
	string ToString();
	friend ostream& operator<<(ostream& os, const TPolynom& p)
	{
		os << p.name << endl;
		os << *p.monoms << endl;
		return os;
	}
	//void Print_Polynom();
	void Parse_Polynom(const string& s); // private

protected:
	string FilteredExpression(const string& s);
	bool isOperand(char c);
	bool isValidExpression(const string& expression);
	int Is_Symbol(string sm);
	bool Is_Number(const string& str);
};*/
#endif 
