#pragma once
#include "list.h"

/*
 *	��ǰ��������������ǴӸ�Ԫ��ǰ���Ԫ����Ѱ���ظ���
 */

template <typename T>
int List<T>::deduplicate()
{
	if (_size < 2)
		return;

	int oldSize = _size;

	ListNodePosi(T) p = header;

	Rank r = 0;

	while (trailer != (p = p->succ))
	{
		ListNodePosi(T) q = find(p->data, r, p);	//�˴�find�Ǵ�p��r��ǰ���в���data

		q ? remove(q) : r++;
	}

	return oldSize - _size;
}

