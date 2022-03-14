#pragma once
#include "Table.h"
#include "TabRecord.h"

template<class TKey, class TData>
class ArrayTable : public Table<TKey, TData>
{
protected:
	TabRecord<TKey, TData>* Recs;
	int TabSize;
public:
	ArrayTable(int size = 25)
	{
		Recs = new TabRecord<TKey, TData>[size];
		TabSize = size;
	}
	virtual ~ArrayTable()
	{
		delete[] Recs;
	}
	ArrayTable(const ArrayTable& at)
	{
		TabSize = at.TabSize;
		this->DataCount = at.DataCount;
		Recs = new TabRecord<TKey, TData>[TabSize];
		for (int i = 0; i < this->DataCount; i++)
		{
			Recs[i] = at.Recs[i];
		}
		

	}
	ArrayTable& operator=(const ArrayTable& at)
	{
		if (this != &at)
		{
			if (TabSize != at.TabSize)
			{
				delete[] Recs;
				TabSize = at.TabSize;
				Recs = new TabRecord<TKey, TData>[TabSize];
			}
			this->DataCount = at.DataCount;
			for (int i = 0; i < this->DataCount; i++)
			{
				Recs[i] = at.Recs[i];
			}
		}
		return *this;
	}
	virtual bool isFull() const
	{
		return this->DataCount == TabSize;
	}
	int GetTabSize() const
	{
		return TabSize;
	}
	virtual TData* Find(TKey k) = 0;
	virtual void Insert(TKey k, TData* ptr) = 0;
	virtual void Delete(TKey k) = 0;
	
};