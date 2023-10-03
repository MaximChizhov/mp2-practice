#ifndef TSet_H
#define TSet_H
#include "TBitField.h"

class TSet
{
	size_t maxPower;
	TBitField bitField;
public:
	TSet(int mp) : maxPower(mp), bitField(mp) { }; //Создает объект класса TSet с заданным максимальным количеством элементов в множестве (mp).
	TSet(const TSet& s) : maxPower(s.maxPower), bitField(s.bitField) { };
	size_t GetMaxPower(void) const { return maxPower; }//Возвращает максимальное количество элементов в множестве.
	bool IsMem(size_t elem) const { return bitField.GetBit(elem); }//Проверяет, содержится ли элемент в множестве.
	void InsElem(size_t elem) { return bitField.set(elem); }// Вставка элемента
	void DelElem(size_t elem) { return bitField.reset(elem); };//Удаление элемента
	//арифметические операции
	TSet operator+(size_t elem);//Выполняет объединение множества с указанным элементом
	TSet operator-(size_t elem);//Выполняет объединение множества с указанным элементом
	TSet operator+(const TSet& s);//Объединение двух множеств
	TSet operator*(const TSet& s);//Пересечение двух множеств
	TSet operator~();//Дополнение множества
};
#endif
