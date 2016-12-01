#pragma once
#include "vector.h"

template <typename T>
int Vector<T>::deduplicate()	//����������ɾ���ظ�Ԫ�أ���Ч��
{
	int oldSize = _size;

	Rank i = 1;

	while (i < _size)
	{
		find(_elem[i], 0, i) < 0 ? i++ : remove(i);
	}

	return oldSize - _size;
}

