#pragma once
#include "vector.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:���ֲ���

Analysis:
�� �Ӻ���ǰ����������ҵ���ͬ��Ԫ�أ����޳����޳�һ���൱��i++��
�� ����Ҳ�����ͬ��Ԫ�أ���i++

**************************************************************/

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

