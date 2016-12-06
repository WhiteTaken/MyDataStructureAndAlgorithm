#pragma once
#include "vector.h"

/**************************************************************

Author��hungry
Date:2016.11.30
Description:��������������ͬԪ�ص��޳�

Analysis:
�� ����ָ�������ȣ�һ���Ǵ�ǰ����������ȣ�һ����ָ��ͬԪ��ĩλ����
�� ��������ͬԪ��ʱ��jһֱ�����������iԭ�ز�ͬ
�� ֱ�������ʱ����j��Ԫ�طŵ�++i��λ��

**************************************************************/

template <typename T>
int Vector<T>::uniquify()
{
	Rank i = 0;
	Rank j = 0;

	while (++j < _size)
	{
		if (_elem[i] != _elem[j])
			_elem[++i] = _elem[j];
	}

	_size = ++i;

	shrink();

	return j - i;
}

