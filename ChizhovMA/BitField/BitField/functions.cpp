#include "TBitField.h"
#include "TSet.h"
#include <iostream>

TSet TSet::operator+(size_t elem)
{
    TSet result(*this);
    result.InsElem(elem);
    return result;
}
TSet TSet::operator-(size_t elem)
{
    TSet result(*this);
    result.DelElem(elem);
    return result;
}
TSet TSet::operator+(const TSet& s)
{
    size_t newMaxPower;
    if (maxPower > s.maxPower)
        newMaxPower = maxPower;
    else
        newMaxPower = s.maxPower;
    TSet result(newMaxPower);
    result.bitField = bitField | s.bitField;
    return result;
}

TSet TSet::operator*(const TSet& s)
{
    size_t newMaxPower;
    if (maxPower > s.maxPower)
        newMaxPower = maxPower;
    else
        newMaxPower = s.maxPower;
    TSet result(newMaxPower);
    result.bitField = bitField & s.bitField;
    return result;
}
TSet TSet::operator~()
{
    TSet result(maxPower);
    result.bitField = ~bitField;
    return result;
}