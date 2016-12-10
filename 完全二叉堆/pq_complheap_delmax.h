#pragma once
#include "pq_complheap.h"
#include "pq_complheap_percolatedown.h"

/**************************************************************

Author��hungry
Date:2016.12.10
Description:ɾ�����ֵ

Analysis:
�� ���ֵ������0
�� ����ĩ�ڵ����0��λ��
�� ִ�����˲��������ýڵ���õ����ʵ�λ��

**************************************************************/

template <typename T>
T PQ_ComplHeap<T>::delMax()
{
	T maxElem = _elem[0];

	_elem[0] = _elem[--_size];

	percolateDown(_size, 0);

	return maxElem;
}

